//
// Created by Luke Gilsinger, Uyen Dang, Jeremy Culbreath
// CS303
// Project 1B
// 9/25/16.
//

#include <iostream>
#include <string>
#include "term.h"
using namespace std;

//Polynomial linked-list term

bool operator<(const Term& lhs, const Term& rhs) {		// < overload for comparing lhs<rhs exponents
	if (lhs.exp < rhs.exp) return true;
	return false;
}

bool operator>(const Term& lhs, const Term& rhs) {		//	> overload for comparing lhs>rhs exponents
	if (lhs.exp > rhs.exp) return true;
	return false;
}

bool operator==(const Term& lhs, const Term& rhs) {		//	== overload for comparing lhs==rhs exponents
	if (lhs.exp == rhs.exp) return true;
	return false;
}

ostream& operator<<(ostream& ostr, Term& term) {			//cout overload for output
	if (term.coe == 0) return ostr << "";					//do not display terms with 0 coefficients, therefore output empty string if coefficient is 0
	if (abs(term.coe) != 1) ostr << abs(term.coe);			//output absolute value if not +/-1, polynomial class ostream overload should look at - and change + into -
	if (term.exp != 0) ostr << "x";							//output x if exponent is not 0
	if (term.exp != 0 && term.exp != 1) ostr << "^" << term.exp;		//output ^ and exponent, do not display ^ and exponent for 0 or 1 exponets
	ostr << " ";														//space before next term
	return ostr;														//outputs in the form of_x^_ ,first blank is optional coefficient, the next is optional exponent
																		//remember that poloynomail class should look at polynomial class ostream overload should look at - and change + into - between terms in polynomial
}


Term::Term() {							//default constructor(sets coefficient, exponent to 0)
	coe = 0;
	exp = 0;
}

Term::Term(int arg1, int arg2) {		//regular constructor(takes coefficient, exponent as arguments)
	coe = arg1;
	exp = arg2;
}

int Term::getCoe() {
	return coe;
}

int Term::getExp() {
	return exp;
}

void Term::setCoe(int arg) {
	coe = arg;
}

void Term::setExp(int arg) {
	exp = arg;
}
