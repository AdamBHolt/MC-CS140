/* Course: CS140-32440
Assignment: Homework B - 4-21 "Geometry Calculator"
Student: Adam Holt
Instructor: Ray McDowall & Charles Naegeli
Due Date: 3/10/2013

This program asks the user to choose a shape from a menu and calculates the area of the
shape based on dimensions that are specified by the user*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string shape;
	double area = 0, radius, length, width, base, height;
	const float PI = 3.14159;

	//Menu to select a shape to find the area of or to quit the program
	cout << "Geomtetry Calculator\n\n"
		 <<	"\t1. Calculate the Area of a Circle\n"
		 << "\t2. Calculate the Area of a Rectangle\n"
		 << "\t3. Calculate the Area of a Triangle\n"
		 << "\t4. Quit\n";

	switch(cin.get())
	{
		case '1': //Actions if user selects "circle"
			shape = "circle";
			cout << "Enter the redius: ";
			cin >> radius;
			if (radius <= 0) //Only allow positive radius
				cout << "Invalid radius.\n";
			else
				area = PI * pow(radius, 2);
			break;
		case '2': //Actions if user selects "rectangle"
			shape = "rectangle";
			cout << "Enter the length and width separated by a space: ";
			cin >> length >> width;
			if (length <= 0 || width <= 0) //Only allow positive dimensions
				cout << "Invalid length or width\n";
			else
				area = length * width;
			break;
		case '3': //Actions if user selects "triangle"
			cout << "Enter the base and height separated by a space: ";
			cin >> base >> height;
			shape = "triangle";
			if (base <= 0 || height <= 0) //Only allow positive dimensions
				cout << "Invalid base or height.\n";
			else
				area = base * height * .5;
			break;
		case '4':  //Action if user selects "quit"
			return 0;
		default: //Action if an invalid selection is made
			cout << "Invalid choice\n";
	}
	
	//Since area was initialized to 0 this action will only be performed
	//if the user entered valid dimensions
	if (area)
		cout << "The area of the " << shape << " is " << area << ".\n";

	system("pause");
	return 0;
}
