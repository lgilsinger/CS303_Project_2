//
// Created by Luke Gilsinger, Uyen Dang, Jeremy Culbreath
// CS303
// Project 1B
// 9/25/16.
//

#include "polynomial.h"
#include "term.h"
#include <iostream>
#include <list>
using namespace std;

// returns true to keep menu running
bool Menu(polynomial &poly1, polynomial &poly2, polynomial &poly3) {

	// show the main user the menu
	cout << "Polynomial Addition" << endl;
	cout << "(1) Enter Polynomials" << endl;
	cout << "(2) Add Polynomials" << endl;
	cout << "(3) Exit" << endl;
	cout << "Enter Selection: ";

	// response variables for varius menu inputs
	char choice1, exit1, exit2;
	int coe, exp;
	Term temp;
	bool menu = false;
	cin >> choice1;

	// user choice 1
	// enter polynomial 1 and 2, force user to enter coefficents and exponents
	if (choice1 == '1') {
		cout << "First polynomial " << endl;
		while (menu != true) { // bool for menu options, loop until user enters n or N
			cout << "Enter a coefficent: ";
			cin >> coe;
			cout << "Enter an exponent: ";
			cin >> exp;

			// use coefficent and exponents to create term and add term to polynomial
			temp = Term(coe, exp);
			polynomial temp1 = polynomial(temp);
			poly1 = poly1 + temp1;

			cout << "Enter another term in the polynomial? " << endl;
			cout << "(Y)es" << endl;
			cout << "(N)o" << endl;
			cout << "Please enter Y or N: ";

			cin >> exit1;

			if (exit1 == 'y' || exit1 == 'Y') {
				menu = false;
			}
			else if (exit1 == 'n' || exit1 == 'N') {
				menu = true;
			}
			else {
				menu = true;
			}
		}

		// after user enters n or N, user enters coefficents and exponents for second polynomial
		menu = false;
		cout << "Second Polynomial " << endl;
		while (menu != true) { // bool for menu options, loop until user enters n or N
			cout << "Enter a coefficent: ";
			cin >> coe;
			cout << "Enter an exponent: ";
			cin >> exp;

			// use coefficent and exponents to create term and add term to polynomial
			temp = Term(coe, exp);
			polynomial temp2 = polynomial(temp);
			poly2 = poly2 + temp2;

			cout << "Enter another term in the polynomial? " << endl;
			cout << "(Y)es" << endl;
			cout << "(N)o" << endl;
			cout << "Please enter Y or N: ";

			cin >> exit2;

			if (exit2 == 'y' || exit2 == 'Y') {
				menu = false;
			}
			else if (exit2 == 'n' || exit2 == 'N') {
				menu = true;
			}
			else {
				menu = true;
			}
		}

		return false; // back to main menu

					  // user choice 2
					  // adds polynomial1 and polynomial2, stores value in polynomial called finalPoly, displays finalPoly
					  // also clears polynomial1, polynomial2, and finalPoly so user can add as many polynomials as they want
	}
	else if (choice1 == '2') {
		cout << "Adding polynomials" << endl;
		poly3 = poly1 + poly2;
		cout << "The result is: " << poly3 << endl;

		//Clear polys
		poly1.clear();
		poly2.clear();
		poly3.clear();

		system("Pause");
		return false; // return to main menu

					  // user choice 3
					  // exit user menu
	}
	else if (choice1 == '3') {
		return true; // Exit menu

					 // if any other user input is entered, give error message and redisplay main menu options
	}
	else {
		cout << "Your input was not valid, please try again." << endl;
		return false;
	}
}