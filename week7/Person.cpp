/********************************************************************* 
** Author: Chris Matian 
** Date: 07/29/2017
** Description: Function file for Person.hpp
*********************************************************************/
#include <iostream>
#include <string>
#include "Person.hpp"
using std::string;
using std::cout;
using std::endl;

//Class Constructor Initialization
    Person::Person(string initName, double initAge) {
        name = initName;
        age = initAge;
    }

//Get Functions
    string Person::getName() {
        return name;
    }

    double Person::getAge() {
        return age;
    }