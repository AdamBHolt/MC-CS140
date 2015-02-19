/* Course: CS140-32440
Assignment: Extra Credit - 8-5 "Rainfall Statistics Modification"
Student: Adam Holt
Instructor: Charles Naegeli
Due Date: 4/28/2013
*/

//This program asks the user to input the rainfall for each month
//Then outputs the months sorted from most to least rainfall
#include <iostream>
#include <string>
using namespace std;

void getRainfall(double[], string[], int);
void sortArray(double[], string[], int);

int main()
{
	const int MONTHS = 12;
	string months[] = {"January", "February", "March",
						"April", "May", "June", "July",
						"August", "September", "October",
						"November", "December"};
	double rainfall[MONTHS];

//Get rainfall amounts per month
getRainfall(rainfall, months, MONTHS);

//Sort rainfall and months arrays from highest to lowest rainfall
sortArray(rainfall, months, MONTHS);

cout << "\nMonths sorted from most to least rainfall:\n\n";

for (int i = 0; i < MONTHS; i++)
	cout << '\t' << months[i] << endl;

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

void sortArray(double rainfall[], string months[], int len)
{
	int startScan, maxIndex, maxValue;
	string maxMonth;
	
	for (startScan = 0; startScan < len - 1; startScan++)
	{
		maxIndex = startScan;
		maxValue = rainfall[startScan];
		maxMonth = months[startScan];
		for (int i = startScan + 1; i < len; i++)
		{
			if (rainfall[i] > maxValue)
			{
				maxValue = rainfall[i];
				maxMonth = months[i];
				maxIndex = i;
			}
		}
		rainfall[maxIndex] = rainfall[startScan];
		rainfall[startScan] = maxValue;
		months[maxIndex] = months[startScan];
		months[startScan] = maxMonth;
	}
}