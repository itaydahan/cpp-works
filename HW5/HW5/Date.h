#define _CRT_SECURE_NO_WARNINGS
#include<iostream> 
#ifndef _Date_H 
#define _Date_H 
using namespace std;
class Date
{
int year;  	int month;  	int day; public:
    int GetDay();
    int GetMonth();
    int GetYear();
    void SetDay(int day1);
    void SetMonth(int month1);
    void SetYear(int year1);
    Date(int day1, int month1, int year1);
    Date(const Date& d1);
    Date();
    bool operator>(const Date& d);
    bool operator<(const Date& d);
    bool operator==(const Date& d) const;
    friend ostream& operator<<(ostream& os, const Date& dt);

};
#endif
