#ifndef _Trip_H
#define _Trip_H

#include "Date.h"
#include <string> // program uses C++ standard string class
using namespace std;
class Trip
{
	static int counter;
	int tripNum;
	string dst;
	Date d;
public:
	int GetTripNum();
	string GetDestination();
	Date GetDate();
	void SetDestination(string dst1);
	void SetDate(Date d1);
	Trip(string dst1, Date& d1);
	Trip();
	string operator<<(Trip &t);
	Trip(const Trip& o);
};
int Trip::counter = 0;
#endif