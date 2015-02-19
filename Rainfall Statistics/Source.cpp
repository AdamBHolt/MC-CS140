/* Course: CS140-32440
Assignment: Homework F - 7-2 "Rainfall Statistics"
Student: Adam Holt
Instructor: Charles Naegeli
Due Date: 4/21/2013
*/

//This program asks the user to input the rainfall for each month
//Then outputs the total rainfall, monthly average,
//Amount and month with the highest and amount and month with the least rainfall
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void getRainfall(double[], string[], int);
double totalRainfall(double[], int);
int maxRainfall(double[], int);
int minRainfall(double[], int);

int main()
{
	const int MONTHS = 12;
	string months[] = {"January", "February", "March",
						"April", "May", "June", "July",
						"August", "September", "October",
						"November", "December"};
	double rainfall[MONTHS];
	int maxRain, minRain;

//Get rainfall amounts per month
getRainfall(rainfall, months, MONTHS);

//Get index of month with most rainfall
maxRain = maxRainfall(rainfall, MONTHS);

//Get index of month with least rainfall
minRain = minRainfall(rainfall, MONTHS);

cout << fixed << showpoint << setprecision(2);
cout << "\n\tTotal Rainfall:   " << setw(10) << totalRainfall(rainfall, MONTHS) << endl;
cout << "\tAverage Rainfall: " << setw(10) << totalRainfall(rainfall, MONTHS)/MONTHS << endl;
cout << "\tMaximum rainfall: " << setw(10) << rainfall[maxRain] << endl;
cout << "\t        In month: " << setw(10) << months[maxRain] << endl;
cout << "\tMinimum rainfall: " << setw(10) << rainfall[minRain] << endl;
cout << "\t        In month: " << setw(10) << months[minRain] << endl;

	system("pause");
	return 0;
}


void getRainfall(double rainfall[], string months[], int len)
{
	//Get user input for each element of rainfall
	for (int x = 0; x < len; x++)
	{
		cout << "Input the rainfall for " << months[x] << ": ";
		cin >> rainfall[x];

		//Do not allow negative input
		while (rainfall[x] < 0)
		{
			cout << "Rainfall cannot be negative, please eneter again: ";
			cin >> rainfall[x];
		}
	}
}


double totalRainfall(double rainfall[], int len)
{
	double total = 0;
	//Calculate total of all array elements
	for (int x = 0; x < len; x++)
		total += rainfall[x];
	return total;
}

int maxRainfall(double rainfall[], int len)
{
	int maxIndex = 0;
	//Find index of array element with the highest vvalue
	for (int x = 1; x < len; x++)
	{
		if (rainfall[x] > rainfall[maxIndex])
			maxIndex = x;
	}
	return maxIndex ;
}

int minRainfall(double rainfall[], int len)
{
	int minIndex = 0;
	//Find index of array element with the lowest value
	for (int x = 1; x < len; x++)
	{
		if (rainfall[x] < rainfall[minIndex])
			minIndex = x;
	}
	return minIndex;
}
