/********************************************************************* 
** Author: Chris Matian 
** Date: 08/03/2017
** Description: Application that uses pointer references to replace an 
** array with an array that is twice as large, i.e. repeats indexes per loop.
*********************************************************************/
#include <iostream>
using std::cout;
using std::endl;

// Function Prototype
void repeatArray(double*&, int);


// Integer main for testing the function - comment out later.
int main() {
    int currentSize = 3;


    // Fill in array traditionally
    // double* myArray = new double[currentSize]{1.2, 1.3, 1.4};

    // Fill in array via for-loop 
    double* myArray = new double[currentSize];
    for (int i = 0; i < currentSize; i++) {
        myArray[i] = (i + 1) * 2;
    }

    // Function Call
    repeatArray(myArray, currentSize);

    // Output results
    for (int i = 0; i < currentSize * 2; i++) {
        cout << myArray[i] << endl;
    }

    // Delete array from main to avoid memory leak
    delete []myArray;


return 0;
}

// Function
void repeatArray(double*& initialArray, int size) {
    // Double the original size
    int newSize = size * 2;
    
    // Create the dynamically allocated array of doubles
    double* newArray = new double[newSize];
    
    // Pull old values from initialArray and combine them with new values for newArray
    for(int i = 0, j = 0; i < newSize; i++, j++) {
        // The loop runs and increments i and j.
        // When the j exceeds or equals size (equivalent of 3), the index for j is reset back to 0.
        // However, i continues from wherever it is in the index and j is now passing in previous values from index 0 up to 2.
        if(j >= size) {
            j = 0;
        }
        // The index of newArray[i] is inheriting the index of the initialArray as the for loop runs
        newArray[i] = initialArray[j];
    }
    
    

    // Deallocation - prevents memory leaks by getting rid of unused memory in the initialArray
    delete []initialArray;
    
    // Allocation
    initialArray = newArray;
}