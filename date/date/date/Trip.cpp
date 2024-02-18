#include "Trip.h"

#include <iostream>
int Trip::GetTripNum()
{
	return tripNum;
}
string Trip::GetDestination()
{
	return dst;
}
Date Trip::GetDate()
{
	return d;
}
void Trip::SetTripNum(int tripNum1)
{
	tripNum = tripNum1;
}
void Trip::SetDestination(string dst1)
{
	dst = dst1;
}
void Trip::SetDate(Date d1)
{	
	d.SetDay(d1.GetDay());
	d.SetMonth(d1.GetMonth());
	d.SetYear(d1.GetYear());
}
Trip::Trip(int tripNum1, string dst1, Date &d1)
{
	tripNum = tripNum1;
	dst = dst1;
	d = Date(d1);
}
Trip::Trip()
{
	tripNum = 1;
	dst = "israel";
	d = Date();
}
void Trip::PrintTrip()
{
	std::cout << "Trip Num: " << tripNum << "\nDestination: " << dst << "\nDate: ";
	d.PrintDate();
}
Trip::Trip(const Trip& o)
{
	dst = nullptr;
	*this = o;
}


