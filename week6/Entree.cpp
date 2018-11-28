/********************************************************************* 
** Author: Chris Matian 
** Date: 07/24/2017
** Description: Functions document for the Entree document.
*********************************************************************/
#include <iostream>
#include <string>

#include "Entree.hpp"
using std::string;

//Constructors
Entree::Entree() {
    entreeName = "";
    entreeCalories = 0;
}

Entree::Entree(string entName, int entCalories) {
    entreeName = entName;
    entreeCalories = entCalories;
}

//Method Calls
string Entree::getName() {
    return entreeName;
}

int Entree::getNumCalories() {
    return entreeCalories;
}