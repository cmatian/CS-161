/********************************************************************* 
** Author: Chris Matian 
** Date: 07/24/2017
** Description: Class specification header file for the Entree Sampler Functions
*********************************************************************/
#ifndef ENTREESAMPLER_HPP
#define ENTREESAMPLER_HPP

#include "Entree.hpp"

class EntreeSampler {
    private:
        Entree item1; // contains the Entree Class 1
        Entree item2; // contains the Entree Class 2
        Entree item3; // contains the Entree Class 3
        Entree item4; // contains the Entree Class 4
    public:
        //Constructors
        EntreeSampler(Entree, Entree, Entree, Entree);

        //Methods
        void listEntrees();
        int totalCalories();
}; 
#endif