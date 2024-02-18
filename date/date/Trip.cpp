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
Trip::Trip(string dst1, Date &d1)
{
	counter++;
	tripNum = counter;
	dst = dst1;
	d = Date(d1);
}
Trip::Trip()
{
	counter++;
	tripNum = counter;
	dst = "israel";
	d = Date();
}
string Trip::operator<<(Trip &t)
{
	return "Trip Num: " << t.tripNum << "\nDestination: " << t.dst << "\nDate: "<<t.d;
	
}
Trip::Trip(const Trip& o)
{
	dst = nullptr;
	*this = o;
}


