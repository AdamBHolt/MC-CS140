#include <iostream>

#include <string>
#include <fstream>
#include "isPalindrome.h"

using namespace std;


/* ******************************************* */
int main () {
	string myfile="George.txt";  //default input file name
	int counter=0;  //valid line counter
	cout<< "Please enter file name" << endl;   //prompt to enter  file name or type ?? to accept "George.txt"
	cout <<"or enter '??' to accept 'George.txt'" << endl;
	cin >> myfile;
	if (myfile=="??") myfile="George.txt";
	else;

	fstream inFile(myfile,ios::in);  //opens  input file only if it exists
	if (inFile) //check for open file
	{
	fstream outFile("OUTPUT.TXT",ios::out);  //opens output file
	string inLine;
//***********************************************************************   header block for output file
	
	outFile << "**********************************************" << endl;
	outFile << "CS140-22797  Palindrome Project " << endl;
	outFile << "Requirements are  " << endl;
	outFile << "Develop a C++ program to determine if the " << endl;
	outFile << "input data lines from the file \"George.TXT\""<< endl;
	outFile << "is a palindrome or not.   The output will be " << endl;
	outFile  << "displayed on the monitor and saved in the file" << endl;
	outFile << "OUTPUT.TXT" << endl << endl;
	outFile << "**********************************************" << endl;

//*********************************************************************** 


	
	while (!inFile.eof()) {    //end of file terminates the program
		getline(inFile,inLine);
		
		if (inLine.size()>80) {    //check for maximum line length of 80 characters; skips all lines with more than 80 characters
			cout << endl << "maximum length of input line of 80 is exceeded! "<< endl;
		    cout << "This line is skipped" << endl;}  
		else
			{counter++;
				cout <<endl;
			if (isPalindrome(inLine))    // check for palindrome with call to function 'isPalindrome'
			{cout <<"************************************************************ " << endl;
			cout << endl << "line " << counter << "   '"<<inLine << "' is a palindrome " << endl;    //  display to monitor
			cout <<endl<<"************************************************************ " << endl;
			outFile << endl << "line " << counter << "   '"<<inLine << "' is a palindrome " << endl;  //  written to Output file "OUTPUT.TXT"
			outFile<<endl<<"************************************************************ " << endl;
			}
			else
			{cout <<"************************************************************ " << endl;   //  display to monitor
			cout << endl << "line " << counter<<  "   '"<< inLine <<"'is not a palindrome"  << endl;
			cout <<endl<<"************************************************************ " << endl;
			outFile <<endl<<"************************************************************ " << endl;
			outFile << endl << "line " << counter<<  "   '"<< inLine<< "'is not a palindrome"  << endl;}  //  written to Output file "OUTPUT.TXT"
			outFile <<endl<<"************************************************************ " << endl;
		}
	}

	inFile.close();   //closes the input file
	outFile.close();  //closes the output file "OUTPUT.TXT"

	
	}
	else
	{cout << "ERROR: Cannot open file.\n";}  // terminates the program
	system("pause");
	return 0;
}
