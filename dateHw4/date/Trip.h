#ifndef _Trip_H
#define _Trip_H

#include<iostream>

#include "Date.h"
#include <string> // program uses C++ standard string class
using namespace std;
class Trip
{
	int tripNum;
	string dst;
	Date d;
public:
	static int counter;
	int GetTripNum();
	string GetDestination();
	Date GetDate();
	void SetDestination(string dst1);
	void SetDate(Date d1);
	Trip( string dst1, Date& d1);
	Trip();
	Trip(const Trip& o);
	friend ostream& operator<<(ostream& os, const Trip& t);
};

#endif
