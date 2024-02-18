#include<iostream>
#include<fstream>
#include "Date.h"
#include "Trip.h"
#include "ManagementTrips.h"

ManagementTrips::ManagementTrips() {
	ind = 0;
	trips = new Trip * [0];
}

ManagementTrips::ManagementTrips(const ManagementTrips& m) {
	ind = m.ind;
	trips = new Trip * [ind];
	for (int i = 0; i < ind; i++) {
		trips[i] = new Trip(*(m.trips[i]));
	}
}



void ManagementTrips::operator+=(Trip* t) {
	Trip** tempPtr = new Trip * [this->ind + 1];
	for (int i = 0; i < this->ind; i++) {
		tempPtr[i] = this->trips[i];
	}
	tempPtr[this->ind] = t;
	this->ind++;

	delete[]this->trips;
	this->trips = tempPtr;
}

void ManagementTrips::operator-=(Trip& t)
{
	int countDelete = 0;
	for (int i = 0; i < ind; i++) {
		if (trips[i]->GetDate().operator==(t.GetDate())) {
			countDelete++;
		}
	}
	//index-count is the new size
	if (countDelete > 0) {
		int indexTemp = 0;
		Trip** temp = new Trip * [ind - countDelete];
		for (int i = 0; i < ind; i++) {
			if (!trips[i]->GetDate().operator==(t.GetDate())) {
				temp[indexTemp] = trips[i];
				indexTemp++;
			}
		}
		ind = indexTemp;

		delete[]trips;
		trips = temp;
	}
}

std::ostream& operator<<(std::ostream& out, const ManagementTrips& m) {
	if (m.ind == 0) {
		out << "no trips" << endl;
		return out;
	}
	for (int i = 0; i < m.ind; i++) {
		out << *m.trips[i] << endl;
	}
	return out;

}
ManagementTrips::~ManagementTrips() {
	for (int i = 0; i < ind; i++) {
		delete trips[i]; // Release memory for each Trip object
	}
}