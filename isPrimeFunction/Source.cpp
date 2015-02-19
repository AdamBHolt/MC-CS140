/* Course: CS140-32440
Assignment: Homework E - 6-21 "isPrime Function"
Student: Adam Holt
Instructor: Ray McDowall & Charles Naegeli
Due Date: 4/14/2013
*/

//This program asks the user to input a nubmer larger than 1 and determines  whether the number is prime or not
#include <iostream>
using namespace std;

bool isPrime(unsigned long);

int main()
{
	unsigned long number;
	cout << "Enter a number, and I will tell you whether it is prime or not: ";
	
	//Input validation - Only numbers greater than 1 can be prime
	do{
		cin >> number;
		if (number <= 1) cout << "Please enter a nubmer larger than 1: ";
	} while (number <= 1);

	if(isPrime(number)) //If isPrime returns true, the number is prime
		cout << number << " is a prime number\n";
	else //If isPrime returns false, the number is not prime
		cout << number << " is not a prime number\n";

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