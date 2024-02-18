#define _CRT_SECURE_NO_WARNINGS
#include "Date.h"
#include "Cake.h"
#include <iostream>
#include <cstring>

#ifndef _BirthdayCake_H 
#define _BirthdayCake_H 
class BirthdayCake : public Cake
{
	char* text;
public:
	BirthdayCake(Date expiryDate1, int diameter1, double height1, double price1, int storage1, bool gluutenFree1, char* text) : Cake(expiryDate1, diameter1, height1, price1, storage1, gluutenFree1), text(text) {}
	BirthdayCake(const BirthdayCake& o) : Cake(o) {
		#pragma warning(suppress : 4996)

		this->text = new char[strlen(o.text) + 1];
		strcpy(text, o.text);
	};
	~BirthdayCake();
	Date getDate() const;
	int getDiameter() const;
	double getHeight() const;
	double getPrice() const;
	int getStorage() const;
	bool IsGlutenFree() const;
	char* GetText() const;
	void SetDate(const Date& expiry);
	void SetDiameter(int diameter);
	void SetHeight(double height);
	void SetPrice(double price);
	void SetStorage(int storage);
	void SetGlutenFree(bool glutenFree);
	void SetText(char* text);
	bool operator==(const BirthdayCake& mc) const;
	friend ostream& operator<<(ostream& os, const BirthdayCake m);

};
#endif