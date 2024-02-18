// HW5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS

#include "Date.h"
#include "Cake.h"
#include <iostream>
#include <string>
#include "BirthdayCake.h"
#include "MousseCake.h"

using namespace std;

int main()
{
	Date d1 = Date(1, 2, 2003);
	Date d2 = Date(1, 2, 2003);

	char text[] = {'i', 't', 'a', 'y','\0'};
	BirthdayCake c1 = BirthdayCake(d1,3,2.4,3.1,1,true,&text[0]);
	BirthdayCake c2 = BirthdayCake(d2, 3, 2.4, 3.1, 1, true, &text[0]);
	if (c1 == c2)
		cout << true;
	

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
