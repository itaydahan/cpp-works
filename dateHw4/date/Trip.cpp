#include "Trip.h"
#include <string>
#include <iostream>

int Trip::counter = 0;
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
ostream& operator<<(ostream& os, const Trip& t)
{
	os << "Trip Num: " << t.tripNum<< "\nDestination: " << t.dst << "\nDate: "<<t.d;
	return os;
}
Trip::Trip(const Trip& o)
{
	counter++;
	tripNum = counter;
	dst=o.dst;
	d = o.d;
}


