//
// Created by Luke Gilsinger, Uyen Dang, Jeremy Culbreath
// CS303
// Project 1B
// 9/25/16.
//

#pragma once

#include <iostream>
#include "term.h"
#include <list>
using namespace std;

class polynomial
{
public:
    Term *head = new Term;

    // default constructor
    polynomial();

    // constructor
    polynomial(Term t);

    // push Term onto end of polynomial
    void push_back(Term &t);

    // assignment opperator overload
    polynomial operator+ (polynomial &other);

    // output stream overload
    friend ostream &operator<<(ostream &out, polynomial &poly);

    //clears  data
    void clear();

};
