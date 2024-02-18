#define _CRT_SECURE_NO_WARNINGS
#include "Date.h"

#include <iostream>
#ifndef _Cake_H 
#define _Cake_H 
using namespace std;
class Cake {
protected:
	Date expiryDate;
	int diameter;
	double height;
	double price;
	int storage;
	bool glutenFree;
public:
	Cake(Date expiryDate1, int diameter1, double height1, double price1, int storage1, bool gluutenFree1);
	Cake(const Cake& c);
	bool operator==(const Cake& c) const;
	void operator+=(double price);
	friend ostream& operator<<(ostream& os, const Cake& c);

};
#endif