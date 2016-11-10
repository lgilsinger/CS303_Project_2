//
// Created by Luke Gilsinger, Uyen Dang, Jeremy Culbreath
// CS303
// Project 1B
// 9/25/16.
//

#pragma once

#include <iostream>
#include <string>
using namespace std;

//Polynomial linked-list term
class Term
{
	friend bool operator<(const Term& lhs, const Term& rhs);	//	< overload for comparing lhs < rhs exponents
	friend bool operator>(const Term& lhs, const Term& rhs);	//	> overload for comparing lhs > rhs exponents
	friend bool operator==(const Term& lhs, const Term& rhs);	//	== overload for comparing lhs == rhs exponents

	friend ostream& operator<<(ostream& ostr, Term& term);		//	cout overload for output

private:
	//no thing

public:
	int coe, exp;					// coefficient and exponent
	
	Term();							//default constructor
	Term(int coe, int exp);			//regular constructor
	
	Term* next;						// link to next Term 
	
	int getCoe();
	int getExp();

	void setCoe(int coe);
	void setExp(int exp);

};
