/********************************************************************* 
** Author: Chris Matian 
** Date: 08/15/2017
** Description: This is the Customer.cpp file that contains all of the functions for the Customer.hpp header file.
*********************************************************************/

#include "Customer.hpp"

// Constructor for Customer Object

Customer::Customer(std::string n, std::string a, bool pm) {
    name = n;
    accountID = a;
    premiumMember = pm;
}

// Functions

// Get Customer Account ID
std::string Customer::getAccountID() {
    return accountID;
}

// Get Customer Cart
std::vector<std::string> Customer::getCart() {
    return cart;
}

// Add Product to Cart
void Customer::addProductToCart(std::string idCode) {
    cart.push_back(idCode);
}

// Determine whether the customer is a premium member
bool Customer::isPremiumMember() {
    if(premiumMember == true) {
        return true;
    }
    return false;
}

// Empty the customer cart
void Customer::emptyCart() {
    cart.clear();
}