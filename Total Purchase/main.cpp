//This program holds the prices of five items, and displays the subtotal and total of the sale
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double item1, item2, item3, item4, item5, taxrate, subtotal, total;
	cout << "Price of item 1: $";
	cin >> item1;
	cout << "Price of item 2: $";
	cin >> item2;
	cout << "Price of item 3: $";
	cin >> item3;
	cout << "Price of item 4: $";
	cin >> item4;
	cout << "Price of item 5: $";
	cin >> item5;
	cout << "Tax rate: %";
	cin >> taxrate;
	subtotal = item1 + item2 + item3 + item4 + item5;
	total = subtotal + (subtotal * (taxrate / 100));
	
	cout << "\nItem 1: $" << item1;
	cout << "\nItem 2: $" << item2;
	cout << "\nItem 3: $" << item3;
	cout << "\nItem 4: $" << item4;
	cout << "\nItem 5: $" << item5;
	cout << "\n\nSubtotal: \t$" << subtotal;
	cout << "\nTotal: \t\t$" << setprecision(2) << fixed << total << endl;

	system("pause");
	return 0;
}