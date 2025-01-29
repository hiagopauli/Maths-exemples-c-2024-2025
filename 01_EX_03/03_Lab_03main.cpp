#include <iostream>

using namespace std;

bool is_leap_year (int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main ()
{
	int year;
	cout << "Enter with the year: ";
	cin >> year;
	
	if (is_leap_year(year))
	{
		cout << year << "is a leap year." << endl;
	}
	else
	{
		cout << year << "is not a leap year." << endl;
	}
	return EXIT_SUCCESS;
}
