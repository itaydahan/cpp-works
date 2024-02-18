#define _CRT_SECURE_NO_WARNINGS
#include "Date.h"
#include "Cake.h"
#include <iostream>
#include <string>
#ifndef _MousseCake_H 
#define _MousseCake_H 
class MousseCake : public Cake
{
	char* taste;
public:
	MousseCake(Date expiryDate1, int diameter1, double height1, double price1, int storage1, bool gluutenFree1, char* taste): Cake(expiryDate1, diameter1, height1, price1, storage1, gluutenFree1),taste(taste){}
	MousseCake(const MousseCake& o) : Cake(o) {
		#pragma warning(suppress : 4996)

		this->taste = new char[strlen(o.taste) + 1];
		strcpy(taste, o.taste);
	};
	~MousseCake();
	Date getDate() const;
	int getDiameter() const;
	double getHeight() const;
	double getPrice() const;
	int getStorage() const;
	bool IsGlutenFree() const;
	char* GetTaste() const;
	void SetDate(const Date& expiry);
	void SetDiameter(int diameter);
	void SetHeight(double height);
	void SetPrice(double price);
	void SetStorage(int storage);
	void SetGlutenFree(bool glutenFree);
	void SetTaste(char* taste);
	bool operator==(const MousseCake& mc) const;
	friend ostream& operator<<(ostream& os, MousseCake m);





};
#endif