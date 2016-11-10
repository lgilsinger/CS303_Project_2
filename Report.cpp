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

//output report
void viewReport(int& floors, int& elevators, int& passengers, int& maxTime, int& minTime, int& flowRate) {
	//check if user has not run simulation
	if (floors == 0 && elevators == 0 && passengers == 0 && maxTime == 0 && minTime == 0 && flowRate == 0) {
		cout << "Simulation must run before report will be available." << endl << endl;
		system("Pause");
		return;
	}

	//output report
	system("CLS");

	cout << "Elevator Simulation Report" << endl << endl
		<< "Number of Floors: " << floors << endl
		<< "Number of Elevators: " << elevators << endl
		<< "Number of Passengers: " << passengers << endl
		<< "Maximum Wait Time: " << maxTime << endl
		<< "Minimum Wait Time: " << minTime << endl
		<< "Passengers per Hour: " << flowRate << endl << endl;

	system("Pause");
}
