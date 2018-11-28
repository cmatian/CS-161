/************************************************************************************************* 
** Author: Chris Matian 
** Date: 07/29/2017
** Description: This is the header class specification file for determining the standard deviation.
*************************************************************************************************/ 
#include <string>
#include <iostream>
using std::string;

#ifndef PERSON_HPP
#define PERSON_HPP

class Person {
    private:
        //Variable Declarations
        string name;
        double age;
    public:
        //Contructor
        Person(string, double);

        //Methods
        string getName();
        double getAge();
};
#endif
