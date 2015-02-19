/* Course: CS140-32440
Assignment: Extra Credit - 8-2 "Lottery Winners"
Student: Adam Holt
Instructor: Charles Naegeli
Due Date: 4/28/2013
*/

//This program asks the user to enter the day's winning lottery number
//and then searches an array of 10 regularly played numbers
//If the winning number is not found then none of the regular numbers is a winner
//If the winning number is found in the array then it is a winning ticket
#include <iostream>
using namespace std;

int searchArray(int[], int, int);

int main()
{
	//Regularly played lottery numbers
	int myNumbers[] = {13579, 26791, 26792, 33445, 55555,
					   62483, 77777, 79422, 85647, 93121};
	int winningNumber;

	cout << "Input this week's winning lottery number: ";
	cin >> winningNumber;

	if(!searchArray(myNumbers, winningNumber, 10))
		//If searchArray returns 0, the winningNumber is not in the array
		cout << "No winning tickets found.\n";
	else
		//If searchArray returns anything other than 0, winningNumber is in the array
		cout << winningNumber << " is a winner!\n";

	system("pause");
	return 0;
}

int searchArray(int theArray[], int number, int size)
{
	for (int i = 0; i < size; i++)
		if (theArray[i] == number)
			return theArray[i]; //Return the number if it is found
	return 0; //If the number is not found return 0
}