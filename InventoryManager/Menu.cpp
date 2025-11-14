#include "Menu.h"
#include "Inventory.h"
#include "Validity.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

Menu::Menu(Inventory &currentInventory)
{
    while (true)
    {
        string answer;
        cout << "-------Welcome--------\n";

        cout << "1.Add A Product";
        cout << "2.Remove A Product ";
        cout << "3.Update A Product Quantity";
        cout << "4.Find A Product";
        cout << "5.List All Products";
        cout << "6.List All Products Below Quantity";
        cout << "7.Sort Products By Name";
        cout << "8.Calculate Total Inventory Value";
        cout << "Type (1-8) or Type 'exit' to exit\n"
             << endl;

        cin >> answer;

        if (answer == "1")
        {
            string product_name;
            int product_price;
            cout << "Enter Product Name: " << "\n"
                 << endl;
            cin >> product_name;
            cout << "Enter Product Price: " << "\n"
                 << endl;
            cin >> product_price;
        }
        else if (answer == "2")
        {
            int id;
            int product;
            cout << "Enter the id of the product:" << endl;
            cin >> id;
            if (id > 0)
            {
                currentInventory.removeProduct(id);
            }
            else
            {
                cout << "Invalid Product Id";
            }
        }
        else if (answer == "3")
        {
            int id;
            int quantity;
            cout << "Enter the id of the product:" << endl;
            cin >> id;
            cout << "Enter the quantity of the product:" << endl;
            cin >> quantity;

            if (Validity::invalid_id_check(id) || Validity::invalid_product_quantity_check(quantity))
            {
            }
            else
            {
                currentInventory.updateQuantity(id, quantity);
            }
        }
        else if (answer == "4")
        {
            int id;
            int quantity;
            cout << "Enter the id of the product:" << endl;
            cin >> id;

            if (Validity::invalid_id_check(id))
            {
            }
            else
            {
                currentInventory.findProductById(id);
            }
        }
        else if (answer == "5")
        {
            currentInventory.listAllProducts();
        }
        else if (answer == "6")
        {
            int quantity;
            cout << "Enter the id of the product:" << endl;
            cin >> quantity;

            if (Validity::invalid_product_quantity_check(quantity))
            {
            }
            else
            {
                currentInventory.listProductsBelowQuantity(quantity);
            }
        }
        else if (answer == "7")
        {
            currentInventory.sortProductsByName();
        }
        else if (answer == "8")
        {
            currentInventory.calculateTotalInventoryValue();
        }
        else if (answer == "exit")
        {
            cout << "Good Bye! \n";
            break;
        }
    }
}
