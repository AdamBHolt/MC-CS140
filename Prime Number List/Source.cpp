/* Course: CS140-32440
Assignment: Homework E - 6-22 "Prime Number List"
Student: Adam Holt
Instructor: Ray McDowall & Charles Naegeli
Due Date: 4/14/2013
*/

//This program utilizes the isPrime function to generate a text file
//that contains a list of all prime numbers from 1 to 100
#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(unsigned long);

int main()
{
	ofstream outFile;
	unsigned long number;
	outFile.open("Primelist.txt");

	for ( int x = 2; x < 100; x++)
		if(isPrime(x)) outFile << x << endl;

	outFile.close();
	system("pause");
	return 0;
}

bool isPrime(unsigned long num)
{
	for (unsigned long x = 2; x < num; x++) 
	
		//Test the expression num % x for every number between 1 and num
		//If num % x is ever 0 it indicates that num is not prime and the function returns false
		if (!(num % x)) return false;
	
	//if the loop completes then num % x is never 0 - indicates that num is prime
	return true;
}