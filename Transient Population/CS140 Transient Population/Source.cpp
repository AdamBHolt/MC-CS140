/* Course: CS140-32440
Assignment: Homework D - 6-16 "Transient Population"
Student: Adam Holt
Instructor: Ray McDowall & Charles Naegeli
Due Date: 4/7/2013
*/

#include <iostream>
#include <string>
using namespace std;

//This program prompts the user to input various population modifiers then
//calculates the populations for a specified number of years

int populationChange(int, double, double, int, int);

//Overloaded functions to allow multiple input types
double inputValue(double, string, string);
int inputValue(int, string, string);

int main()
{
	int population,
		numYears, //number of years to calculate population change
		transientIn, //number of people who move into the area annually
		transientOut; //number of people who leave the area annually

	double birthRate, deathRate;

	cout << "This program calculates population change.\n\n";

	population = inputValue(2,
		"Enter the starting population size: ",
		"Starting population must be 2 or more.");

	birthRate = inputValue(0.0,
		"Enter the annual birth rate (as % of current population): ",
		"Birth rate percent cannot be negative.");

	deathRate = inputValue(0.0,
		"Enter the annual death rate (as % of current population): ",
		"Death rate percent cannot be negative.");

	transientIn = inputValue(0,
		"How many individuals move into the area each year? ",
		"Arrivals cannot be negative.");

	transientOut = inputValue(0,
		"How many individuals leave the area each year? ",
		"Departures cannot be negative.");

	numYears = inputValue(1,
		"For how many years do you wish to view population change? ",
		"Years must be one or more.");

	cout << "\n\tStarting population: \t\t" << population << endl;
	for (int x = 1 ; x < numYears + 1; x++)
	{
		//Recaculate population change each iteration
		population = populationChange(population, birthRate, deathRate, transientIn, transientOut);
		cout << "\tPopulation after year " << x << ": \t" << population << endl;
	}
	system("pause");
	return 0;
}

//Caclculate population change
int populationChange(int P, double B, double D, int A, int M)
{
	//Variables 'B' and 'P' typecast to int to return int value
	return P + static_cast<int>((B / 100) * P) - static_cast<int>((D / 100) * P) + A - M;
}

//Function to ask for user input of double type
double inputValue(double minValue, string prompt, string inputError){
	double input;
	cout << prompt;
	do {
		cin >> input;
		if (input < minValue) //Output error string for invalid input
			cout << inputError << "\nPlease re-enter: ";
	} while (input < minValue); //Repeat until valid value is input
	return input;
}

//Function to ask for user input of int type
int inputValue(int minValue, string prompt, string inputError){
	int input;
	cout << prompt;
	do {
		cin >> input;
		if (input < minValue) //Output error string for invalid input
			cout << inputError << "\nPlease re-enter: ";
	} while (input < minValue); //Repeat until valid value is input
	return input;
}