#ifndef _Date_H
#define _Date_H
using namespace std;
class Date
{
	int year;
	int month;
	int day;
public:
	int GetDay();
	int GetMonth();
	int GetYear();
	void SetDay(int day1);
	void SetMonth(int month1);
	void SetYear(int year1);
	Date(int day1,int month1,int year1);
	Date(Date &d1);
	Date();
	void PrintDate();
};
#endif
