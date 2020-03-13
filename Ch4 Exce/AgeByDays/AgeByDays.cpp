#include <iostream>
using std::cout;

/*Define a year as 365 days.
DayAge = YearAge = Year*/
int main()
{
	int DayAge = 0;
	const int Days_Year = 365;
	const int YearAge = 20;
	DayAge = YearAge * Days_Year;

	cout << "Deagan is: \n" << YearAge;
	cout << "\nThat is equal to this many days: \n" << DayAge;

		return 0;
}