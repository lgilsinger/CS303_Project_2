//
// Created by Luke Gilsinger, Uyen Dang, Jeremy Culbreath
// CS303
// Project 2C
// 11/11/16.
//

#include <iostream>
#include <string>
#include "Menu.h"
#include "Sim.h"
#include "Report.h"
//#include "Person.h"
//#include "Elevator.h"
//#include "Floors.h"
using namespace std;


int main() {

	// input variables
	int floors, elevators, passengers;

	//output variables
	int maxTime, minTime, flowRate;

	//menu variable
	int menuSelect;

	//initialize variables - may want to change or remove some later
	floors = elevators = passengers = maxTime = minTime = flowRate = menuSelect = 0;

	// menu loop 
	while (true) {
		system("CLS");
		cout << "Elevator Simulation" << endl << endl
			<< "1 - Run Elevator Simulation" << endl
			<< "2 - View Report" << endl
			<< "3 - Exit" << endl << endl;
		
		//get menu option and check
		menuSelect = menuCheck();
	
		if (menuSelect == 1) runSim(floors, elevators, passengers, maxTime, minTime, flowRate);
		if (menuSelect == 2) viewReport(floors, elevators, passengers, maxTime, minTime, flowRate);
		if (menuSelect == 3) break;

	}
	
	//exiting
	system("CLS");

	cout << "Thank you for using Elevator Simulation!" << endl << endl;
	system("Pause");
	return 0;
}
