/* Course: CS140-32440
Assignment: Homework C - 5-18 "Population Bar Chart"
Student: Adam Holt
Instructor: Ray McDowall & Charles Naegeli
Due Date: 4/1/2013
*/

//This program reads a list of numbers representing population and displays them as a bar chart
//using a '*' to represent every 1000 people
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	ifstream inFile;
	int population, year = 1900;

	cout << "Prairieville Population Growth 1900 - 2000\n"
		 << "(each * represents 1000 people)\n";

	inFile.open("people.txt"); //open people.txt

	//read each line of people.txt
	while(inFile >> population){
		cout << year << " ";
		year += 20; //increase year by 20

		//output a '*' for every thousand people for each year
		for(int x = 0 ; x < population / 1000; x++)
			cout << "*";
		cout << endl;
	}

	inFile.close(); //close people.txt
	system("pause");
	return 0;
}