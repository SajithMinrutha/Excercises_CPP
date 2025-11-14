#include "Validity.h"
#include <iostream>

using std::cout;
using std::string;

int Validity::invalid_id_check(int id)
{
    if (id > 0)
    {
        return 0;
    }
    else
    {
        cout << "Invalid Product Id!";
        return 1;
    }
}
static int invalid_product_name_check(string product_name)
{

    if (product_name != "")
        return 0;
    else
    {
        cout << "Invalid Name!";
        return 1;
    }
}
static int invalid_price_check(string product_name, int product_price)
{
    if (product_price > 0)
        return 0;
    else
    {
        cout << "Invalid Price!";
        return 1;
    }
}
static int invalid_product_quantity_check(int product_quantity)
{
    if (product_quantity > 0)
        return 0;
    else
    {
        cout << "Invalid Quantity!";
        return 1;
    }
}
