/* Course: CS140-32440
Assignment: Homework C - 5-24 "Using Files - Numeric Processing"
Student: Adam Holt
Instructor: Ray McDowall & Charles Naegeli
Due Date: 4/1/2013
*/

//This program reads a list of numbers from a file and displays
//the number of numbers, their sum, and their average
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inFile;
	int count = 0, number, total = 0;
	double average;

	inFile.open("random.txt"); //open random.txt

	//read each line from random.txt
	while(inFile >> number)
	{
		count++; //increment count
		total += number; //increase total by the value of the current number
	}

	//calculate the average of the numbers (typecast as double for accuracy)
	average = static_cast<double>(total) / static_cast<double>(count);

	cout << "Number of numbers: " << count << endl;
	cout << "Sum of all numbers: " << total << endl;
	cout << "Average of numbers: " << average << endl;

	inFile.close(); //close random.txt
	system("pause");
	return 0;
}