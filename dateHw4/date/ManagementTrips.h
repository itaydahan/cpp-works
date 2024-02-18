#include<iostream>
#include<fstream>
#include "Date.h"
#include "Trip.h"
#ifndef _ManagementTrips_H
#define _ManagementTrips_H
#pragma once	
class ManagementTrips
{
	Trip** trips;
	int ind;
public:
	ManagementTrips();
	ManagementTrips(const ManagementTrips& m);
	~ManagementTrips();
	void operator+=(Trip* t);
	void operator-=(Trip& t);
	friend std::ostream& operator<<(std::ostream& out, const ManagementTrips& m);


};
#endif