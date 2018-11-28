/********************************************************************* 
** Author: Chris Matian 
** Date: 07/24/2017
** Description: Functions document for the EntreeSampler document.
*********************************************************************/
#include <iostream>
#include "EntreeSampler.hpp"
using std::endl;
using std::cout;

// Constructors
EntreeSampler::EntreeSampler(Entree item1In, Entree item2In, Entree item3In, Entree item4In) {
    item1 = item1In;
    item2 = item2In;
    item3 = item3In;
    item4 = item4In;
}

// Functions
// Prints out the Entree's names using the getName() method from Entree.hpp
void EntreeSampler::listEntrees() {
    cout << item1.getName() << endl;
    cout << item2.getName() << endl;
    cout << item3.getName() << endl;
    cout << item4.getName() << endl; 
}

// Returns the total calories in all entrees
int EntreeSampler::totalCalories() {
    return item1.getNumCalories() + item2.getNumCalories() + item3.getNumCalories() + item4.getNumCalories();
}