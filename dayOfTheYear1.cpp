// dayOfTheYearTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class DayOfTheYear
{
private:

	int monthDay;
	string selectedMonth;
	int trueDay;

	int chosenDay;
	string trueMonth;

public:

	DayOfTheYear(int d)
	{
		chosenDay = d;
		setMonth(chosenDay);
	}

	DayOfTheYear(int d, string m)
	{
		monthDay = d;
		selectedMonth = m;
		setDay(monthDay, selectedMonth);
	}

	void setDay(int md, string sm)
	{
		int trueDay;

		if (sm == "January")
		{
			trueDay = md;
		}

		else if (sm == "February")
		{
			trueDay = md + 31;
		}

		else if (sm == "March")
		{
			trueDay = md + 59;
		}

		else if (sm == "April")
		{
			trueDay = md + 90;
		}

		else if (sm == "May")
		{
			trueDay = md + 120;
		}

		else if (sm == "June")
		{
			trueDay = md + 151;
		}

		else if (sm == "July")
		{
			trueDay = md + 181;
		}

		else if (sm == "August")
		{
			trueDay = md + 212;
		}

		else if (sm == "September")
		{
			trueDay = md + 243;
		}

		else if (sm == "October")
		{
			trueDay = md + 273;
		}

		else if (sm == "November")
		{
			trueDay = md + 304;
		}

		else if (sm == "December")
		{
			trueDay = md + 334;
		}

		cout << selectedMonth << " " << monthDay << " would be Day " trueDay << endl;

		//printDay(trueDay);
	}

	void setMonth(int d2)
	{
		if (d2 <= 31)
		{
			trueMonth = "January";
			trueDay = d2;
		}

		else if (d2 >= 32 && d2 <= 59)
		{
			trueMonth = "February";
			trueDay = d2 - 31;
		}

		else if (d2 >= 60 && d2 <= 90)
		{
			trueMonth = "March";
			trueDay = d2 - 59;
		}

		else if (d2 >= 91 && d2 <= 120)
		{
			trueMonth = "April";
			trueDay = d2 - 90;
		}

		else if (d2 >= 121 && d2 <= 151)
		{
			trueMonth = "May";
			trueDay = d2 - 120;
		}

		else if (d2 >= 152 && d2 <= 181)
		{
			trueMonth = "June";
			trueDay = d2 - 151;
		}

		else if (d2 >= 182 && d2 <= 212)
		{
			trueMonth = "July";
			trueDay = d2 - 181;
		}

		else if (d2 >= 213 && d2 <= 243)
		{
			trueMonth = "August";
			trueDay = d2 - 212;
		}

		else if (d2 >= 244 && d2 <= 273)
		{
			trueMonth = "September";
			trueDay = d2 - 243;
		}

		else if (d2 >= 274 && d2 <= 304)
		{
			trueMonth = "October";
			trueDay = d2 - 273;
		}

		else if (d2 >= 305 && d2 <= 334)
		{
			trueMonth = "November";
			trueDay = d2 - 304;
		}

		else if (d2 >= 335 && d2 <= 365)
		{
			trueMonth = "December";
			trueDay = d2 - 334;
		}
	}

	void printDate()
	{
		cout << "Day " << chosenDay << " would be " << trueMonth << " " << trueDay << "." << endl;
	}
};

int main()
{
	int input;

	cout << "Would you like to enter a day (1-365) or a date (Ex. January 13)? (Enter 1 or 2)" << endl;
	cin >> input;

	if (input == 1)
	{
		int day = 0;

		while (day < 1 || day > 365)
		{
			cout << "Please enter a day of the year in interger format (1 to 365): " << endl;
			cin >> day;

			if (day > 0 && day < 366)
			{
				DayOfTheYear day1(day);
				day1.printDate();
			}

			else
			{
				cout << "Sorry, invalid input" << endl;
			}
		}
	}

	else if (input == 2)
	{
		string month;
		int date;

		cout << "Please enter a month such as the example: (Ex. March) " << endl;
		cin >> month;

		cout << "Please enter the day of that month: " << endl;
		cin >> date;

		DayOfTheYear day2(date, month);
	}

	return 0;
}