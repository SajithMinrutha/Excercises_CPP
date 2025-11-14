#include "Products.h"
#include "Inventory.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int Inventory::next_id = 1;

void Inventory::addProduct(string product_name, int price)
{
    products[Inventory::next_id] = Products(product_name, price);
    cout << "Product '" << product_name << "' added with ID: " << Inventory::next_id << std::endl;
    Inventory::next_id++;
}
void Inventory::removeProduct(int id)
{
    if (products.contains(id))
    {
        products.erase(id);
    }
    else
    {
        cout << "The Product with the id " << id << " doesn't exist!\n";
    }
}
void Inventory::updateQuantity(int id, int new_quantity)
{
    products[id].setQuantity(new_quantity);
}
void Inventory::findProductById(int id)
{
    if (products.contains(id))
    {
        Products product_is = products[id];
        string prod = product_is.getName();
        cout << "The product with the id " << id << " is" << prod;
    }
    else
    {
        cout << "The Product with the id " << id << " doesn't exist!\n";
    }
}
void Inventory::sortProductsByName()
{
}
void Inventory::listAllProducts()
{
}
void Inventory::listProductsBelowQuantity(int quantity)
{
}
void Inventory::calculateTotalInventoryValue()
{
}
