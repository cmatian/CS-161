/************************************************************************************************* 
** Author: Chris Matian 
** Date: 07/29/2017
** Description: This is a small executable which finds the median of elements in an array.
*************************************************************************************************/ 
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;
using std::sort;

// Function Prototype
double findMedian(int intArray[], int size);

/* The int main has been commented out as per instruction.
int main() {
    int array[] = {5, 0, 16, 15, 13, -10, -100, 12};
    int size = 8;

    double foo = findMedian(array, size);
    cout << foo;

	return 0;
}
*/

// Function for finding the Median of the Array
// The result depends on whether the array size is odd or even.
double findMedian(int array[], int size) {
    //Sort the array
    sort(array, array + size);

    // Conditional for whether the size is an even or odd integer. 
    if (size % 2 != 0) {
        // This condition runs when the array size is odd. The index is determined by the size divided by 2 which returns the index value.
        return array[size / 2];
    } else {
        //Because the array has two even integers we need to find two middle values and store them
        int middleVal1 = (size/2);
        int middleVal2 = (middleVal1 + 1);
        
        //We then take the two middle values and subtract 1 from each (because the index is 0 based) 
        //and then we add them together and divide by 2 to find the average.
        //We also divide by 2.0 in order to ensure that a double value is returned.
        double avg = (array[middleVal1 - 1] + array[middleVal2 - 1])  / 2.0;
        return avg;
    }
}

