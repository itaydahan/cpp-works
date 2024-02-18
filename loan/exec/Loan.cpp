#define _CRT_SECURE_NO_WARNINGS
#include "Loan.h"
#include <cmath>
#include <iostream>


int Loan::counter = 100;

Loan::Loan(char* name1, int amount1,float rate1, int term1)
{
	if (this->name != NULL)
		delete[] this->name;
	this->name = new char[strlen(name1) + 1];
	strcpy(this->name, name1);
	this->amount = amount1;
	this->rate = rate1;
	this->term = term1;
	this->id = Loan::counter;
	Loan::counter++;
}

Loan::~Loan()
{
	delete[] name;
}

Loan::Loan(const Loan& l)
{
	if (this->name != NULL)
		delete[] this->name;
	this->name = new char[strlen(l.name) + 1];
	strcpy(this->name, l.name);
	this->amount = l.amount;
	this->rate = l.rate;
	this->term = l.term;
	this->id = Loan::counter;
	Loan::counter++;
}

Loan& Loan::operator=(const Loan& l)
{
	if (this->name != NULL)
		delete[] this->name;
	this->name = new char[strlen(l.name) + 1];
	strcpy(this->name, l.name);
	this->amount = l.amount;
	this->rate = l.rate;
	this->term = l.term;
	this->id = Loan::counter;
	Loan::counter++;
	return *this;
}

void Loan::SetRate(float rate1)
{
	this->rate = rate1;
}

void Loan::SetID()
{
	this->id = Loan::counter;
	Loan::counter++;
}

int Loan::GetID() const
{
	return this->id;
}

double Loan::MonthlyPayment() const
{
	return (this->amount * (this->rate/1200) * pow((1 + this->rate/1200), this->term)) / (pow((1 + this->rate/1200), this->term) - 1);
}

void Loan::display() const
{
	cout << "Name: " << *this->name << "\nID: " << this->id << "\n Ammount: " << this->amount << "\nRate: " << this->rate << "\nTerm: " << this->term;
}

bool Loan::operator==(const Loan& L) const
{
	return ((this->amount == L.amount) && (this->rate == L.rate) && (this->term == L.term));
}

void Loan::operator+=(int term1)
{
	this->term += term1;
}
