/**************************************************************************************************************************** 
** Author: Christopher Matian
** Date: July 10th, 2017
** Description: A program that prompts the user for an input file, reads values from the file, and outputs it to a txt file.
*****************************************************************************************************************************/ 

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    ifstream inputFile;
    ofstream outputFile;
    string fileName;

    double value, 
        total = 0.0;

    // Prompt User
    cout << "Please enter the name of the file you would like to open:\n";
    cin >> fileName;

    // Open the input file
    inputFile.open(fileName);

    if (inputFile) {
        while (inputFile >> value) {
            // cout << value;
            // numValues++;
            total += value;
        }

        // Commenting this bit out because it is not necessary to output anything to the console. 
        // cout << total << endl; 

        inputFile.close();
    } else {
        cout << "Could not access file.\n";
    }

    //Create Output File
    outputFile.open("sum.txt");

    // Write sum to the file
    outputFile << total;

    //Close Output File
    outputFile.close();

	return 0;
}