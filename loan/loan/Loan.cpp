#include "Loan.h"
#include <cmath>
#include <iostream>


Loan::Loan(char* name1)
{
	if (this->name != NULL)
		delete[] this->name;
	this->name = new char[strlen(name1) + 1];
	strcpy(this->name, name1);
	this->amount = 10000;
	this->rate = 5.5;
	this->term = 36;
	this->id = Loan::count;
	Loan::count++;
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
	this->id = Loan::count;
	Loan::count++;
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
	this->id = Loan::count;
	Loan::count++;
	return *this;
}

void Loan::SetRate(float rate1)
{
	this->rate = rate1;
}

void Loan::SetID()
{
	this->id = count;
	count++;
}

int Loan::GetID() const
{
	return this->id;
}

float Loan::MonthlyPayment() const
{
	return (this->amount * this->rate * pow((1 + this->rate), this->term)) / (pow((1 + this->rate), this->term) - 1);
}

void Loan::display() const
{
	cout << "Name: " << *this->name << "\nID: " << this->id << "\n Ammount: " << this->amount << "\nRate: " << this->rate << "\nTerm: " << this->term;
}

bool Loan::operator==(const Loan& L) const
{
	return ((this->amount==L.amount)&&(this->rate==L.rate)&&(this->term==L.term));
}

void Loan::operator+=(int term1)
{	
	this->term += term1;
}

