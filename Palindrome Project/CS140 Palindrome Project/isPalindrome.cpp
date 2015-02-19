#include <string>

#include "isPalindrome.h"

// pre: a character string of any length is passed by reference to this function:
//Note the main program checks for input line length and skips any line with more than 80  characters

//post:  returns true if the data line is a palindrome


//  a palindrome is a line that reads the same in reverse as it does forward using proper characters
// a proper character is an alpha or numeric character only Punctuation and spaces are ignored.
// also assumne a line with no proper characters is not a plaindrome

//implemented with char arrays which were created from the character string that was passed by reference


bool isPalindrome(string inputLine)
{
     const int MY_CONST = inputLine.size()+1;   // used  to initialize the  character arrays.  
   	// char line[MY_CONST];   ///  This won't work
    //char line[MY_CONST] = new char[MY_CONST];   // Nor will this.
	
	// but this will
	char *line= new char[MY_CONST];  // dynamic allocation to declare a new char array: returns a pointer to 'line' in the free store
	
	int k;  // variable for number of characters in a line
	int K; //variable for number of converted characters (only alpha and numeric) in a line
	char *LINE =new char[MY_CONST];  // proper character array  of a line of input: max # of characters is the same as 'line'
	
	char *revline= new char[MY_CONST]; //character array of a line of input in reverse: max # of characters is the same as 'line'
	 
	char  *REVLINE= new char[MY_CONST];// proper character array in reverse
	 // char REVLINE[MY_CONST];

	int count =0;  // Loop counter variable for input data line
	int COUNT=0; // loop counter variable for converted input data line  (to proper characters)
	char *linePtr=line;

	char *LINEPtr=LINE;
	char *revlinePtr=revline;
	char *REVLINEPtr=REVLINE;
	int TEST=0;

	
	//  convert string to character array//
    // uses <cstring> memcpy http:www.cplusplus.com/reference/clibrary/cstring//memcpy/
	
	line[inputLine.size()]=NULL;// the last value in the array points to NULL or '\0' is necessary based on definition
	memcpy(line,inputLine.c_str(),inputLine.size()); // copies the content  of the string into the 'new' char array 'line'
	
		 cout <<"'";
		while(line[count] != '\0')  // or NULL  // displays and counts each character in the array

		{
			 cout <<  line[count] ;
			 count++ ;
			
		}
		 k=count;
		cout << "'   which has " << k << " characters :\n";

		cout << "\n";
		cout << "... using pointers:  '";
		for ( count=0;count <k; count++)
		//{cout << *(linePtr+count) ;} // another way to display the line
		{cout << line[count];}
		cout <<"'";

		// now display the proper characters only for the input data line: skips punctuation and spaces
		cout << "\n... with all proper characters:  "<<"'";
		for ( count=0;count <k; count++)
		{   if (isalpha(line[count])|| (isdigit(line[count]) ) )    //test for alphabetic or numeric character
				{
					LINE[COUNT]=toupper(line[count]);   //converts all lower case characters to uppercase
		
		         cout << *(LINEPtr+COUNT) ;  // the converted character (to proper)
		          COUNT++;} 
		     else ;

		}
		cout <<"'";
		
		 K=COUNT;   // total proper characters
		 cout << " (" << K << " proper characters)";
			cout <<"\n";

    cout << "\n The input data line in reverse is :'"; 
	   for (count =k-1; count >=0;count--)
	   { revline[k-1-count]=line[count];}
	    for (count=0; count<k;count++)   
		{cout << revline[count] ;}
	   cout << "'\n";
	  
		

		cout << "... in reverse: '";
		COUNT=0;
		for ( count=0;count <k; count++)
		{   if (isalpha(revline[count]) || (isdigit(revline[count]) ))     //test for alphabetic character
				{
					REVLINE[COUNT]=toupper(revline[count]);
		
		         cout << *(REVLINEPtr+COUNT) ;
		          COUNT++;} // another way to display the line
		     else ;
			 
		}
		cout <<"'";
		 K=COUNT;   // total proper characters   has to be the same in both directions
		
		cout <<"\n";
		

		// Now test for equivalence
	
		for (COUNT=0; COUNT<K; COUNT++)
		{if(LINE[COUNT]==REVLINE[COUNT]) TEST=1;

		
		else TEST= 2 ;
		

		if (TEST != 1) break;}

		if (TEST==1)
		
		return true;
		else 
		
		return false;
	   
	    
	


}
