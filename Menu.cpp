//
// Created by Luke Gilsinger, Uyen Dang, Jeremy Culbreath
// CS303
// Project 2C
// 11/11/16.
//


#include <iostream>
#include <string>
//#include "Person.h"
//#include "Elevator.h"
//#include "Floors.h"
using namespace std;

//menu checking
int menuCheck() {
	int check = 0;
	while (true) {
		string prompt1 = "Please enter a menu option: ";
		string prompt2 = "Invalid option. Please try again.";
		cout << prompt1;
		cin >> check;
		cout << endl;
		if (check == 1 || check == 2 || check == 3)
			return check;
		else {
			cout << prompt2 << endl;
			check = 0;
		}
	}
}
