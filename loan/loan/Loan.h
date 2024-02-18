#include <iostream>
#ifndef _Loan_H
#define _Loan_H
using namespace std;
class Loan
{
	static int count;
	char* name;
	int id;
	int amount;
	float rate;
	int term;
public:
	Loan(char* name1);
	~Loan();
	Loan(const Loan& l);
	Loan& operator=(const Loan& l);
	void SetRate(float rate1);
	void SetID();
	int GetID() const;
	float MonthlyPayment() const;
	void display() const;
	bool operator==(const Loan& L) const;
	void operator+=(int term1);
};
int Loan::count = 100;
#endif 
