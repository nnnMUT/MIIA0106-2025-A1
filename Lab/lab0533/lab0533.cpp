#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void swapByvalue(int x, int y);
void swapByreference(int& x, int& y);

int main()
{
	int a = 0;
	int b = 0;
	char choice;
	

	do {
		cout << "Enter value for a:";
		cin >> a;
		cout << "Enter value for b:";
		cin >> b;
		
		cout << "\n[Intial] Before swap: a = " << a << ", b = " << b << endl;

		// test call by value
		swapByvalue(a, b);
		cout << "After swap(Call by value): a = " << a << ", b = " << b << endl;

		// test call by reference
		swapByreference(a, b);
		cout << "After swap(Call by reference): a = " << a << ", b = " << b << endl;

		// ask user if they want to continue
		cout << "\nDo you want to try again? (y/n): ";
		cin >> choice;

		cout << "==============================" << endl;

	} while (choice == 'y' || choice == 'Y'); // continue if user enters 'y' or 'Y'
	return 0;
	}

void swapByvalue(int x, int y) 
{
	int temp = x;
	x = y;
	y = temp;
}
void swapByreference(int& x, int& y) 
{
	int temp = x;
	x = y;
	y = temp;
}