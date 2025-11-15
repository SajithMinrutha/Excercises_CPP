#ifndef INVENTORY_H
#define INVENTORY_H
#include "Products.h"
#include <iostream>
#include <map>

using std::string;

class Inventory
{

public:
    std::map<int, Products> products;
    static int next_id;

    void addProduct(string product_name, int price);

    void removeProduct(int id);

    void updateQuantity(int id, int new_quantity);

    void findProductById(int id);

    void sortProductsByName();

    void listAllProducts();

    void listProductsBelowQuantity(int quantity);

    void calculateTotalInventoryValue();
};
#endif