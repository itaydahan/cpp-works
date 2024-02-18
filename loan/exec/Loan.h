#include <iostream>
#ifndef _Loan_H
#define _Loan_H
using namespace std;
class Loan
{
	
	char* name;
	int id;
	int amount;
	float rate;
	int term;
public:
	static int counter;
	Loan(char* name1, int amount1=10000,float rate1=5.5, int term1=36);
	~Loan();
	Loan(const Loan& l);
	Loan& operator=(const Loan& l);
	void SetRate(float rate1);
	void SetID();
	int GetID() const;
	double MonthlyPayment() const;
	void display() const;
	bool operator==(const Loan& L) const;
	void operator+=(int term1);
};
#endif 
