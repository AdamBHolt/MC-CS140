#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main()
{
	int gap = 0;
	while(!GetKeyState(32))
	{
		cout << getch() << endl;
		cout << GetAsyncKeyState(97) << endl;
		cout << GetKeyState(115) << endl;

		int key1 = GetKeyState(75), key2 = GetKeyState(77);
		if(key1) gap--;
		if(key2) gap++;
		for(int x = 0; x < gap; x++) cout << " ";
		cout << "*";
		//system("cls");
	}
	return 0;
}