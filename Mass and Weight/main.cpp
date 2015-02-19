/* Course: CS140-32440
Assignment: Homework A - 4-6 "Mass and Weight"
Student: Adam Holt
Instructor: Ray McDowall & Charles Naegeli
Due Date: 3/3/2013
*/

//This program asks for the mass of an object (in kilograms) and calculates the weight (in newtons)
#include <iostream>
using namespace std;

int main()
{
	double mass, weight;
	const float RATE_OF_GRAVITY = 9.8; //Multiplier to determine weight

	cout << "Enter the object's mass (in kilograms): ";
	cin >> mass;

	//Calculate the object's weight
	weight = mass * RATE_OF_GRAVITY;
	cout << "The object's weight is " << weight << " newtons\n";
	 
	//Test if the object is too heavy or too light
	if (weight > 1000)
		cout << "The object is too heavy.\n";
	if (weight < 10)
		cout << "The object is too light.\n";

	system("pause");
	return 0;
}