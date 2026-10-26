#include "DateClass.h"
#include <iostream>
#include <string>
using namespace std;

DateClass::DateClass(int M, int D, int Y) {
	this->Month = M;
	this->Day = D;
	this->Year = Y;
}

string DateClass::MonthName() {
	if (int M = 1) {
		string month = "January";
		return month;
	}
	else if (int M = 2) {
		string month = "February";
		return month;
	}
	else if (int M = 3) {
		string month = "March";
		return month;
	}
	else if (int M = 4) {
		string month = "April";
		return month;
	}
	else if (int M = 5) {
		string month = "May";
		return month;
	}
	else if (int M = 6) {
		string month = "June";
		return month;
	}
	else if (int M = 7) {
		string month = "July";
		return month;
	}
	else if (int M = 8) {
		string month = "August";
		return month;
	}
	else if (int M = 9) {
		string month = "September";
		return month;
	}
	else if (int M = 10) {
		string month = "October";
		return month;
	}
	else if (int M = 11) {
		string month = "November";
		return month;
	}
	else if (int M = 12) {
		string month = "December";
		return month;
	}
}
	void DateClass::PrintMonth() {
		cout << "You Entered: " << this->MonthName() << " " << this->Day << ", " << this->Year << endl;
	}

