#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Date.h"
#include "Cake.h"

Cake::Cake(Date expiryDate1, int diameter1, double height1, double price1, int storage1, bool gluutenFree1)
{
	expiryDate = Date(expiryDate1);
	diameter = diameter1;
	height = height1;
	price = price1;
	storage = storage1;
	glutenFree = gluutenFree1;
}

Cake::Cake(const Cake& c)
{
	this->expiryDate = Date(c.expiryDate);
	this->diameter = c.diameter;
	this->height = c.height;
	this->price = c.price;
	this->storage = c.storage;
	this->glutenFree = c.glutenFree;
}

bool Cake::operator==(const Cake& c) const
{
	return((this->expiryDate == c.expiryDate) && (this->diameter == c.diameter) && (this->height == c.height) && (this->price == c.price) && (this->storage == c.storage) && (this->glutenFree == c.glutenFree));
}

void Cake::operator+=(double price)
{
	this->price += price;
}

ostream& operator<<(ostream& os, const Cake& c)
{
	os << "Expiry Date: " << c.expiryDate << "\nDiameter: " << c.diameter << "\nHeight: " << c.height << "\nPrice: " << c.price << "\nStorage: ";
	if (c.storage == 1)
		os << "Friidge";
	else
		os << "freezer";
	os << "\nIs Gluten Free? ";
	if (c.glutenFree)
		os << "yes!";
	else
		os << "no!";
	return os;

}
