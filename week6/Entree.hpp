/********************************************************************* 
** Author: Chris Matian 
** Date: 07/24/2017
** Description: Class specification header file for the Entree Functions
*********************************************************************/
#ifndef ENTREE_HPP
#define ENTREE_HPP

#include <string>
using std::string;

class Entree {
    private:
        string entreeName;
        int entreeCalories;

    public:
        //Constructor Prototypes
        Entree();
        Entree(string, int);

        //Methods
        string getName();
        int getNumCalories();
};
#endif

