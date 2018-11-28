/********************************************************************* 
** Author: Chris Matian 
** Date: 08/15/2017
** Description: This is the main.cpp file that adds the products/customers to the store class.
*********************************************************************/

#include "Product.hpp"
#include "Customer.hpp"
#include "Store.hpp"
#include <iostream>

int main() {
    // Customer Objects
    Customer *c1 = new Customer("Greg", "1", true);
    Customer *c2 = new Customer("Chris", "2", false);

    // Product Objects
    Product *p1 = new Product("123", "red blender", "sturdy blender for blending things", 350, 4);
    Product *p2 = new Product("456", "balloon", "nice little blue balloon", 750, 4);

    //Store Object
    Store s;

    // Products
    s.addProduct(p1);
    s.addProduct(p2);

    // Customers
    s.addMember(c1);
    s.addMember(c2);

    // Get ID
    s.getProductFromID("123");

    // Product Search
     s.productSearch("sturdy");
    
    // Adding Products to member cart

    s.addProductToMemberCart("456", "2");
    s.addProductToMemberCart("456", "2");
    s.addProductToMemberCart("456", "2");
    s.addProductToMemberCart("123", "2");

    s.addProductToMemberCart("456", "1");
    s.addProductToMemberCart("456", "1");
    s.addProductToMemberCart("123", "1");

    //checkout
    s.checkOutMember("2");
    s.checkOutMember("1");
    return 0;
}