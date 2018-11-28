/********************************************************************* 
** Author: Chris Matian 
** Date: 07/24/2017
** Description: Main testing file for Entree Application
*********************************************************************/
#include <iostream>
#include "EntreeSampler.hpp"
using std::endl;
using std::cout;

int main() {
    Entree entree1("Biscuits", 100);
    Entree entree2("Pancakes", 450);
    Entree entree3("Hashbrowns", 350);
    Entree entree4("Waffles", 300);
/*
    cout << entree1.getName();
    cout << entree2.getName();
    cout << entree3.getName();
    cout << entree4.getName();

    cout << entree1.getNumCalories();
    cout << entree2.getNumCalories();
    cout << entree3.getNumCalories();
    cout << entree4.getNumCalories();
*/

    EntreeSampler sample1(entree1, entree2, entree3, entree4);
    sample1.listEntrees();
    cout << sample1.totalCalories() << endl;


    return 0;
}