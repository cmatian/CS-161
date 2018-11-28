/********************************************************************* 
** Author: Chris Matian 
** Date: 08/15/2017
** Description: Store.cpp file that contains all of the functions for Store
*********************************************************************/

#include "Store.hpp"
#include <cctype>
#include <iostream>

// Functions
void Store::addProduct(Product* p) {
    // Push product to inventory vector
    inventory.push_back(p);
}

void Store::addMember(Customer* c) {
    // Push customer to members vector
    members.push_back(c);
}

// Refactored to return a pointer...
Product* Store::getProductFromID(std::string productID) {
    // Loop through the inventory class pointer and return if the parameter matches
    for(int i = 0; i < inventory.size(); i++) {
        Product *p = inventory.at(i);
        if(p->getIdCode() == productID) {
            return p;
        }
    } 
    return NULL;
}

// Refactored to return a pointer...
Customer* Store::getMemberFromID(std::string memberID) {
    // Loop through the members class pointer and return if the parameter matches
    for(int i = 0; i < members.size(); i++) {
        Customer *c = members.at(i);
        if(c->getAccountID() == memberID) {
            return c;
        }
    } 
    return NULL;
}

void Store::productSearch(std::string str) {

    std::string compareStr = str;
    //conversion of string to lowercase
    for(int k = 0; k < compareStr.length(); k++) {
        compareStr[k] = tolower(compareStr[k]);
    }

    // for loop compares lowercase compareStr to the invTitle / invDesc.
    for(int i = 0; i < inventory.size(); i++) {
        // Sets shorthand variables for the getTitle and getDescription functions
        std::string invTitle = inventory.at(i)->getTitle();
        std::string invDesc = inventory.at(i)->getDescription();
        // If the strings do match...
        if((invTitle.find(compareStr) != std::string::npos) || (invDesc.find(compareStr) != std::string::npos))  {
            // Output the inventory title, ID, Price, and description
            std::cout << inventory.at(i)->getTitle() << std::endl; 

            std::cout << "ID Code: " << inventory.at(i)->getIdCode() << std::endl;

            std::cout << "Price: $" << inventory.at(i)->getPrice() << std::endl;

            std::cout << inventory.at(i)->getDescription() << std::endl;
        }
    }
}


// Code refactored to utilize the getProductFromID and getMemberFromID functions. The original code is commented out below beginning @line 93. 
void Store::addProductToMemberCart(std::string pID, std::string mID) {
    Product *p = getProductFromID(pID);
    Customer *c = getMemberFromID(mID);
    if (p != NULL && c != NULL) {
        if(p->getQuantityAvailable() > 0) {
            c->addProductToCart(pID);
        } else {
            std::cout << "Sorry, product #" << pID << " is currently out of stock." << std::endl;
        }
    } else {
        if(p == NULL) {
            std::cout << "Product #" << pID << " not found." << std::endl;
        }

        if(c == NULL) {
            std::cout << "Member #" << mID << " was not found." << std::endl;
        }
    }
}

/*
void Store::addProductToMemberCart(std::string pID, std::string mID) {
    bool flag1 = false, flag2 = false;
    for(int i = 0; i < inventory.size(); i++) {
        if(inventory.at(i)->getIdCode() == pID) {
            flag1 = true;
            for(int j = 0; j < members.size(); j++) {
                // mID is equal to the accountID
                if(members.at(j)->getAccountID() == mID) {
                    flag2 = true;
                    // Adds the product to cart via pID
                    if(inventory.at(i)->getQuantityAvailable() > 0) {
                        members.at(j)->addProductToCart(pID);
                    } else {
                        std::cout << "Sorry, product #" << pID << " is currently out of stock." << std::endl;
                    }
                }
            }
            if(flag2 == false) {
                // mID isn't found and prints out the cout string.
                std::cout << "Member #" << mID << " was not found." << std::endl;
            }   
        } 
    }
    if (flag1 == false) {
        // pID isn't found and prints out the cout string.
        std::cout << "Product #" << pID << " not found." << std::endl;
    }
}
*/


void Store::checkOutMember(std::string mID) {
    bool flag = false;
    double subTotal = 0.0;

    for(int i = 0; i < members.size(); i++) {
        // If account ID matches the mID
        if(members.at(i)->getAccountID() == mID) {
            flag = true;
            // Customer cart storage variable
            std::vector<std::string> custCart = members.at(i)->getCart();
            // The Cart is empty.
            if(custCart.empty()) {
                std::cout << "There are no items in the cart." << std::endl;
            // The Cart is not empty.
            } else {
                // Loop through custCart vector and inventory. 
                for(int j = 0; j < custCart.size(); j++) {
                    for(int k = 0; k < inventory.size(); k++) {
                        // If they match, run the conditionals within
                        if(custCart.at(j) == inventory.at(k)->getIdCode()) {
                            if(inventory.at(k)->getQuantityAvailable() >= 1) {
                                // Product is available
                                subTotal += inventory.at(k)->getPrice();
                                inventory.at(k)->decreaseQuantity();
    
                                std::cout << inventory.at(k)->getTitle() << " - $" << inventory.at(k)->getPrice() << std::endl;
                            } else {
                                // Product is not available
                                std::cout << "Sorry, product #" << inventory.at(k)->getIdCode() << ", " << '"' << inventory.at(k)->getTitle() << '"' <<  ", is no longer available." << std::endl;
                            }
                        }
                    }
                }
                // Calculate the subtotal and the shipping costs based on whether
                // or not the customer is a premium member.
                std::cout << "Subtotal: $" << subTotal << std::endl;
                double shipping = 0.0;
                if(members.at(i)->isPremiumMember()) {
                    shipping = 0.0;
                } else {
                    shipping = 0.07 * subTotal;
                }
                std::cout << "Shipping cost: $" << shipping << std::endl;
                std::cout << "Total: $" << subTotal + shipping << std::endl;

                //Clear the customer's cart after calculations.
                if(!custCart.empty()) {
                    members.at(i)->emptyCart();
                    std::cout << "Customer #" << members.at(i)->getAccountID() << "'s cart was emptied upon checkout." << std::endl;
                }
            }
        } 
    }
    // Member ID not found
    if(flag == false)  {
        std::cout << "Sorry, member #" << mID << " not found." << std::endl;
    }
}

