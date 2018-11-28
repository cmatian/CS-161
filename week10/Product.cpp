/********************************************************************* 
** Author: Chris Matian 
** Date: 08/15/2017
** Description: This is the Product.cpp file that contains all of the functions for the Product.hpp header file.
*********************************************************************/

#include "Product.hpp"

// Constructor for Product Object
Product::Product(std::string id, std::string t, std::string d, double p, int qa) {
    idCode = id;
    title = t;
    description = d;
    price = p;
    quantityAvailable = qa;
}

// Functions

// Get ID Code
std::string Product::getIdCode() {
    return idCode;
}

// Get Title
std::string Product::getTitle() {
    return title;
}

// Get Description
std::string Product::getDescription() {
    return description;
}

// Get Price
double Product::getPrice() {
    return price;
}

// Get Quantity Available
int Product::getQuantityAvailable() {
    return quantityAvailable;
}

// Decrement Quantity by 1
void Product::decreaseQuantity() {
    quantityAvailable -= 1;
}