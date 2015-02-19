#include <iostream>
using namespace std;

int main()
{
	double startingTime, totalCharges, rate;
	int callLength, tier = 0;
	const double TIER_ONE_RATE = .12,
				TIER_TWO_RATE = .55,
				TIER_THREE_RATE = .35;

	cout << "Enter the starting time of the call (HH.MM): ";
	cin >> startingTime;
	cout << "Enter the length of the call (minutes): ";
	cin >> callLength;

	if (callLength >= 0.00 && callLength <= 6.59)
		tier = 1;
	else if (callLength >= 7.00 && callLength <=19.00)
		tier = 2;
	else if (callLength >= 19.01 && callLength <= 23.59)
		tier = 3;



	switch (tier);
	{
		case 1:
			rate = TIER_ONE_RATE;
			break;
		case 2:
			rate = TIER_TWWO_RATE;
			break;
		case callLength >= 19.01 && callLength <= 23.59:
			rate = TIER_THREE_RATE;
			break;
		default: 
			


	}



	system("pause");
	return 0;
}