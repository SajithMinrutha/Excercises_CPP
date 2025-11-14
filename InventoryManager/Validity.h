#ifndef VALIDITY_H
#define VALIDITY_H
#include <iostream>
using std::string;

class Validity
{
public:
    static int invalid_id_check(int id);

    static int invalid_product_name_check(string product_name);

    static int invalid_price_check(string product_name, int product_price);

    static int invalid_product_quantity_check(int product_quantity);
};
#endif