/* Course: CS140-32440
Assignment: Homework B - 4-18 "The Speed of Sound"
Student: Adam Holt
Instructor: Ray McDowall & Charles Naegeli
Due Date: 3/10/2013

This program asks the user to select a medium from a menu of three choices
Then asks for a distance that a sound wave will travel through the medium.
Based on a set of known speeds the program calculates the time it takes the
sound wave to travel the specified distance through the chosen medium*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

	string medium;
	double distance, speed, time;

	//Constant speeds through available media
	const double SPEED_IN_AIR = 1100.00, SPEED_IN_WATER = 4900.00, SPEED_IN_STEEL = 16400.00;
	
	//Menu to select medium for sound wave to travel through
	cout << "Choose a medium:\n"
	     << "1) Air\n"
		 << "2) Water\n"
		 << "3) Steel\n";

	//Set speed and medium variables based on the user's choice
	switch(cin.get())
	{
		case '1':
			cout << "Air:";
			speed = SPEED_IN_AIR;
			medium = "air";
			break;
		case '2':
			cout << "Water:";
			speed = SPEED_IN_WATER;
			medium = "water";
			break;
		case '3':
			cout << "Steel:";
			speed = SPEED_IN_STEEL;
			medium = "steel";
			break;
		default:
			cout << "Invalid choice.\n";
			speed = 0;
	}

	//Calculate time to travel user-specified distance through previously-selected medium
	if (speed) //These steps are only performed if speed is not 0
	{
			cout << "\nEnter a distance in feet:";
			cin >> distance;
		if (distance < 0) //Only allows positive distances
			cout << "Invalid distance.\n";
		else
			time = distance / speed;
			cout << "Time for sound to travel " << distance << " feet through " << medium << " is " << setprecision(4) << fixed << time << " seconds\n"; 
	}

	system("pause");
	return 0;
}