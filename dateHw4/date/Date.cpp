#include "Date.h"
#include<iostream>

int Date::GetDay()
{
	return day;
}
int Date::GetMonth()
{
	return month;
}
int Date::GetYear()
{
	return year;
}
void Date::SetDay(int day1)
{
	while (day1 > 30 && day1 < 1)
	{
		std::cout << "invalid day enter new one";
		std::cin >> day1;
	}
	day = day1;
}
void Date::SetMonth(int month1)
{
	while (month1 > 12 && month1 < 1)
	{
		std::cout << "invalid month enter new one";
		std::cin >> month1;
	}
	month = month1;
}
void Date::SetYear(int year1)
{
	while (year1 < 1)
	{
		std::cout << "invalid year enter new one";
		std::cin >> year1;
	}
	year = year1;
}
Date::Date(int day1, int month1, int year1)
{
	while (day1 > 30 && day1 < 1)
	{
		std::cout << "invalid day enter new one";
		std::cin >> day1;
	}
	day = day1;
	while (month1 > 12 && month1 < 1)
	{
		std::cout << "invalid month enter new one";
		std::cin >> month1;
	}
	month = month1;
	while (year1 < 1)
	{
		std::cout << "invalid year enter new one";
		std::cin >> year1;
	}
	year = year1;
}
Date::Date()
{
	day = 1;
	month = 1;
	year = 2023;
}

bool Date::operator>(const Date& d)
{
	if(d.year>this->year)
		return true;
	if (d.year < this->year)
		return false;
	if (d.month > this->month)
		return true;
	if (d.month < this->month)
		return false;
	if (d.day > this->day)
		return true;
	return false;
}
bool Date::operator<(const Date& d)
{
	if (d.year < this->year)
		return true;
	if (d.year > this->year)
		return false;
	if (d.month < this->month)
		return true;
	if (d.month > this->month)
		return false;
	if (d.day < this->day)
		return true;
	return false;
}
bool Date::operator==(const Date& d)
{
	return ((this->day==d.day)&&(this->month==d.month)&&(this->year==d.year));
}
Date::Date(Date &d1)
{
	day=d1.GetDay();
	month = d1.GetMonth();
	year = d1.GetYear();
}

ostream& operator<<(ostream& os, const Date& dt)
{
	os << dt.day << '/' << dt.month << '/' << dt.year;
	return os;
}
