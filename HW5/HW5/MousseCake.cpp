#define _CRT_SECURE_NO_WARNINGS
#include "MousseCake.h"
#include "Cake.h"
#include "Date.h"
#include <string.h>

MousseCake::~MousseCake()
{
	delete[] taste;
}

Date MousseCake::getDate() const
{
	return expiryDate;  // Assuming expiryDate is a member of Cake and accessible.
}

int MousseCake::getDiameter() const
{
	return diameter;
}

double MousseCake::getHeight() const
{
	return height;
}

double MousseCake::getPrice() const
{
	return price;
}

int MousseCake::getStorage() const
{
	return storage;
}

bool MousseCake::IsGlutenFree() const
{
	return glutenFree;
}

char* MousseCake::GetTaste() const
{
	return taste;
}

void MousseCake::SetDate(const Date& expiry)
{
	expiryDate = expiry;
}

void MousseCake::SetDiameter(int diameter)
{
	this->diameter = diameter;
}

void MousseCake::SetHeight(double height)
{
	this->height = height;
}

void MousseCake::SetPrice(double price)
{
	this->price = price;
}

void MousseCake::SetStorage(int storage)
{
	this->storage = storage;
}

void MousseCake::SetGlutenFree(bool glutenFree)
{
	this->glutenFree = glutenFree;
}

void MousseCake::SetTaste(char* taste)
{
	this->taste = taste;
}

bool MousseCake::operator==(const MousseCake& mc) const
{
	return ((this->diameter==mc.diameter)&&(this->height==mc.height)&&(this->price==mc.price)&&(this->storage==mc.storage)&&(this->glutenFree==mc.glutenFree)&&(*this->taste==*mc.taste));
}

ostream& operator<<(ostream& os, MousseCake m)
{
	os << (Cake&)m<<"\nTaste: " << m.taste;
	return os;
}
