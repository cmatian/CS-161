/********************************************************************* 
** Author: Chris Matian 
** Date: 07/29/2017
** Description: Application that determines the standard deviation from a population of varying ages. 
*********************************************************************/
#include <iostream>
#include <cmath> //used for pow
#include <string>
#include "Person.hpp"
using std::string;
using std::endl;
using std::cout;
using std::pow;

// Function prototype
double stdDev(Person peopleArray[], int sampleSize);

/*
// Main integer for testing functions
int main() {
    // Create person objects
    Person person1("Dom", 25);
    Person person2("Carlos", 30);
    Person person3("Nick", 40);

    // Create object array of people of the class Person
    Person people[] = {person1, person2, person3};

    // Outputs the stdDev
    cout << stdDev(people, 3);

    
    //cout << people[0].getAge() << endl;
    //cout << people[1].getName() << endl;
    //cout << people[2].getName() << endl;

    return 0;
}
*/

// standard deviation function
double stdDev(Person peopleArray[], int sampleSize) {
    //Initialize and/or declare the variables that will be needed for calculating the standard deviation
    //Sum should be a double because you want to avoid integer divison and have some precision when determining the stdDev.
    double sum = 0.0;
    double mean;
    double standardDeviation = 0.0;
    
    // For loop to get the total sum of the ages
    for(int i = 0; i < sampleSize; i++) {
        // Increments sum after accessing the peopleArray[].getAge()
        sum += peopleArray[i].getAge(); 
    }

    // Set mean equal to sum divided by sampleSize
    mean = sum/sampleSize;

    // For loop to determine the standard deviation
    for (int i = 0; i < sampleSize; i++) {
        // This effectively takes the age, subtracts the mean, and squares the result.
        // It then adds each result to standardDeviation
        standardDeviation += pow(peopleArray[i].getAge() - mean, 2);
    }
    // I return the sqrt of standardDeviation divided by n, which in this case is n = sampleSize.
    return sqrt(standardDeviation/sampleSize);
}
