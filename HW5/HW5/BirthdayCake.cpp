#define _CRT_SECURE_NO_WARNINGS
#include "Date.h"
#include "Cake.h"
#include <iostream>
#include <cstring>
#include "BirthdayCake.h"

BirthdayCake::~BirthdayCake()
{
	delete[] text;
}

Date BirthdayCake::getDate() const
{
	return expiryDate;
}

int BirthdayCake::getDiameter() const
{
	return diameter;
}

double BirthdayCake::getHeight() const
{
	return height;
}

double BirthdayCake::getPrice() const
{
	return price;
}

int BirthdayCake::getStorage() const
{
	return storage;
}

bool BirthdayCake::IsGlutenFree() const
{
	return glutenFree;
}

char* BirthdayCake::GetText() const
{
	return text;
}

void BirthdayCake::SetDate(const Date& expiry)
{
	this->expiryDate = expiry;
}

void BirthdayCake::SetDiameter(int diameter)
{
	this->diameter = diameter;
}

void BirthdayCake::SetHeight(double height)
{
	this->height = height;
}

void BirthdayCake::SetPrice(double price)
{
	this->price = price;
}

void BirthdayCake::SetStorage(int storage)
{
	this->storage = storage;
}

void BirthdayCake::SetGlutenFree(bool glutenFree)
{
	this->glutenFree = glutenFree;
}

void BirthdayCake::SetText(char* text)
{
#pragma warning(suppress : 4996)
	if(this->text!=NULL)
		delete[] this->text;
	this->text = new char[strlen(text) + 1];
	strcpy(this->text, text);
}

bool BirthdayCake::operator==(const BirthdayCake& mc) const
{
	return((Cake::operator==(mc)) && (strcmp(text, mc.text) == 0));
}

ostream& operator<<(ostream& os, const BirthdayCake m)
{
	
	os << (Cake&)m<<"\nText: " << m.text;
	return os;
}
