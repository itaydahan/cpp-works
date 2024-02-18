// date.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Trip.h"
#include "Date.h"
#include "ManagementTrips.h"
#include <iostream>
#include<fstream>
void deleteTrips(ManagementTrips* mts);
void AddTrip(ManagementTrips* mts);
int main()
{
	ManagementTrips mts=ManagementTrips();

	int option;

	do
	{
		cout << "please select an option: \n1.Print Trips\n2.Delete Trips\n3.Add Trip\n4.Exit" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			cout << mts ;
			break;
		case 2:
			deleteTrips(&mts);
			break;
		case 3:
			AddTrip(&mts);
			break;
		case 4:
			cout << "bye bye!" << endl;
			break;
		default:
			cout << "invalid option" << endl;
		}
	} while (option != 4);
	return 0;
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

void deleteTrips(ManagementTrips* mts)
{
	int day, month, year;
	cout << "ender data by the order day, month, year" << endl;
	cin >> day;
	cin >> month;
	cin >> year;
	Date* d =new Date(day, month, year);
	Trip* t = new Trip("sss", *d);
	*mts -= *t;
}
void AddTrip(ManagementTrips* mts)
{
	string dst;
	int day, month, year;
	cout << "ender data by the order day, month, year" << endl;
	cin >> day;
	cin >> month;
	cin >> year;
	cout << "enter destination"<<endl;
	cin >> dst;
	Date* d = new Date(day, month, year);
	cout << 1;
	Trip* t = new Trip(dst, *d);

	*mts += t;
	cout << 1;
}