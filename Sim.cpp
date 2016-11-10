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

//run simulation
void runSim(int& floors, int& elevators, int& passengers, int& maxTime, int& minTime, int& flowRate) {
	//get variables from user for simulation
	system("CLS");

	cout << "Enter the number of Floors in the building: ";
	cin >> floors;
	cout << endl;

	cout << "Enter the number of Elevators in the building: ";
	cin >> elevators;
	cout << endl;

	cout << "Enter the number of Passengers per day: ";
	cin >> passengers;
	cout << endl;
}
