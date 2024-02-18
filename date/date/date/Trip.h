#ifndef _Trip_H
#define _Trip_H

#include "Date.h"
#include <string> // program uses C++ standard string class
using namespace std;
class Trip
{
	int tripNum;
	string dst;
	Date d;
public:
	int GetTripNum();
	string GetDestination();
	Date GetDate();
	void SetTripNum(int tripNum1);
	void SetDestination(string dst1);
	void SetDate(Date d1);
	Trip(int tripNum1, string dst1, Date& d1);
	Trip();
	void PrintTrip();
	Trip(const Trip& o);
};
#endif