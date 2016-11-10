//
// Created by Luke Gilsinger, Uyen Dang, Jeremy Culbreath
// CS303
// Project 1B
// 9/25/16.
//


#include "polynomial.h"
#include <iostream>
#include <list>
using namespace std;

//default constructor
polynomial::polynomial(){
    //initialize to 0 or NULL
    head->coe = 0;
    head->exp = 0;
    head->next = NULL;
}

// constructor
// initialize polynomial with Term specifications
polynomial::polynomial(Term t){
    head->coe = t.getCoe();
    head->exp = t.getExp();
    head->next = NULL;
}

// addition operator overload
polynomial polynomial::operator+ (polynomial &other){
    polynomial result;  // output vairable
    Term *Index1 = head;  // left side variable
    Term *Index2 = other.head;  // right side variable
    // while both polynomials exist
    while (Index1 != NULL && Index2 != NULL){
        if (result.head->getExp() == 0 && result.head->getExp() == 0){	// if result is initialized and empty
            if (Index1->getExp() > Index2->getExp()){ // left exponent > right exponent
                result.head->setCoe(Index1->getCoe());
                result.head->setExp(Index1->getExp());
                Index1 = Index1->next;
            }

            else if (Index1->getExp() == Index2->getExp()){ // left exponent == right exponent
                int buffC = Index1->getCoe() + Index2->getCoe(); // add coefficients
                int buffE = Index1->getExp();
                result.head->setCoe(buffC);
                result.head->setExp(buffE);
                Index1 = Index1->next;
                Index2 = Index2->next;
            }

            else{ // rhs exponent > lhs exponent
                result.head->setCoe(Index2->getCoe());
                result.head->setExp(Index2->getExp());
                Index2 = Index2->next;
            }
        }

        if ((Index1 != NULL && Index2 != NULL) &&(Index1->getExp() > Index2->getExp())){
            result.push_back(*Index1);
            Index1 = Index1->next;
        }

        else if ((Index1 != NULL && Index2 != NULL) && (Index1->getExp() == Index2->getExp())){
            int buffC = Index1->getCoe() + Index2->getCoe();
            int buffE = Index1->getExp();
            Term dummy = Term(buffC, buffE);
            result.push_back(dummy);
            Index1 = Index1->next;
            Index2 = Index2->next;
        }

        else if (Index1 != NULL && Index2 != NULL){
            result.push_back(*Index2);
            Index2 = Index2->next;
        }
    }

    //one polynomial is empty and the other is not
    while (Index1 == NULL && Index2 != NULL){
        result.push_back(*Index2);
        Index2 = Index2 -> next;
    }

    while (Index1 != NULL && Index2 == NULL){
        result.push_back(*Index1);
        Index1 = Index1 -> next;
    }
    return result;
}


// output operator overload
ostream &operator<<(ostream &out, polynomial &poly){
    //iterate through list and output the terms
    Term *ptr = poly.head;
    do{ 
        out << *ptr;
        // output a + or - , depends on if positive or negative coefficient
        if (ptr->next != NULL && ptr->next->coe > 0 && ptr->coe != 0)
            out << "+ ";
        else if (ptr->next != NULL && ptr->next->coe < 0)
            out << "- ";
        ptr = ptr->next;
    }
	while(ptr);
    return out;
}

//push-back operator overload
void polynomial::push_back(Term &t){
    Term *newTerm = new Term;
    newTerm->coe = t.coe;
    newTerm->exp = t.exp;
    newTerm->next = NULL;

    Term *current = head;
    while(current){
        if (current->next == NULL){
            current->next = newTerm;
            return;
        }
        current = current->next;
    }
}

//clears data
void polynomial::clear(){
    Term *temp;

    //deletes all terms
	while (head){
        temp = head;
        head = temp->next;
        delete temp;
    }
}