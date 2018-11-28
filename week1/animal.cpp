/*********************************************************************
** Author: Christopher Matian 
** Date: 06/26/2017 
** Description: A simple program that asks you for an input animal and outputs it as your favorite 
*********************************************************************/

#include <iostream>
#include <string>

// a simple example program
int main()
{
    std::string faveAnimal;
    std::cout << "Please enter your favorite animal." << std::endl;
    std::cin >> faveAnimal;
    std::cout << "Your favorite animal is the " << faveAnimal;
    std::cout << "." << std::endl;    
    
    return 0;
}
