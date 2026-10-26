#include <iostream>
#include <string>
#include "DateClass.h"
using namespace std;

int main()
{
	int M, D, Y;

	cout << "Date Format App" << endl;
	cout << "=================" << endl;
	cout << "\nEnter the month as an integer ==> ";
	cin >> M;
	cout << "\nEnter the Day as an integer ==> ";
	cin >> D;
	cout << "\nEnter the Year as an integer ==> ";
	cin >> Y;

	DateClass date1(M,D,Y);
	date1.PrintMonth();
}


