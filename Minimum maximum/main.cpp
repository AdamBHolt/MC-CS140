/* Course: CS140-32440
Assignment: Homework A - 4-1 "Minimum/Maximum"
Student: Adam Holt
Instructor: Ray McDowall & Charles Naegeli
Due Date: 3/3/2013
*/

//This program asks for the input of two numbers, then compares the two numbers to determine which is larger
#include <iostream>
using namespace std;

int main()
{
	int number1, number2;

	//User input of two numbers
	cout << "Enter 1st number: ";
	cin >> number1;
	cout << "Enter 2nd number: ";
	cin >> number2;

	//Compare number1 and number2 and output appropriate message
	if(number1 > number2) 
		cout << number1 << " is larger than " << number2 << ".\n";
	else if (number2 > number1)
		cout << number2 << " is larger than " << number1 << ".\n";
	else
		cout << "The numbers are equal to each other.\n";

	system("pause");
	return 0;
}