// date.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Trip.h"
#include "Date.h"
#include <iostream>
bool IsEmpty(int size);
void Print(Trip* arr, int size);
void EditTrip(Trip* arr, int size);
Trip* AddTrip(Trip* arr, int size);

int main()
{
	int option;
	Trip* arr = new Trip[0];
	int size = 0;
	do
	{
		cout << "please select an option: \n1.Print Trips\n2.Edit Trip\n3.Add Trip\n4.Exit" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			Print(arr, size);
			break;
		case 2:
			EditTrip(arr, size);
			break;
		case 3:
			arr = AddTrip(arr, size);
			size++;
			break;
		case 4:
			cout << "bye bye!" << endl;
			break;
		default:
			cout << "invalid option" << endl;
			break;
		}
	} while (option != 4);
}
bool IsEmpty(int size)
{
	if (size == 0)
	{
		cout << "no trips in system" << endl;
		return true;
	}
	return false;
}
void Print(Trip* arr,int size)
{
	if (IsEmpty(size))
		return;
	for (int i = 0; i < size; i++)
		arr[i].PrintTrip();
}
void EditTrip(Trip* arr, int size)
{
	
	int tripNum;
	cout << "enter trip num" << endl;
	cin >> tripNum;
	for (int i = 0; i < size; i++)
	{
		if (tripNum == arr[i].GetTripNum())
		{
			Date temp;
			int op;
			cout << "1.Trip Num\n2.Destination\n3.Date";
			cin >> op;
			string dst;
			switch (op)
			{
				case 1:
					cout << "enter new trip num" << endl;
					int newTN;
					cin >> newTN;
					arr[i].SetTripNum(newTN);
					break;
				case 2:
					cout << "enter new destination" << endl;
					cin >> dst;
					arr[i].SetDestination(dst);
					break;
				case 3:
					cout << "enter new day" << endl;
					int day;
					cin >> day;
					temp.SetDay(day);
					cout << "enter new month" << endl;
					int month;
					cin >> month;
					temp.SetMonth(month);
					cout << "enter new year" << endl;
					int year;
					cin >> year;
					temp.SetYear(year);
					arr[i].SetDate(temp);
					break;
				default:
					cout << "invalid option" << endl;
					break;
			}
		}
	}
}
Trip* AddTrip(Trip* arr, int size)
{
	Trip* temp = new Trip[size+1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = Trip(arr[i]);
	}
	int tripNum, day, month, year;
	string dst;
	cout << "Enter trip num" << endl;
	cin >> tripNum;
	cout << "Enter destination" << endl;
	cin >> dst;
	cout << "Enter day" << endl;
	cin >> day;
	cout << "Enter month" << endl;
	cin >> month;
	cout << "Enter year" << endl;
	cin >> year;
	Date* d =new Date(day, month, year);
	temp[size] =Trip(tripNum, dst, *d);
	arr = temp;
	return arr;
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
