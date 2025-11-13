#include <iostream>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class validity
{
public:
    static int invalid_id_check(int id)
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
};

class Products
{
private:
    int product_price;
    int quantity;
    string product_name;

public:
    Products() : product_name(""), product_price(0) {}
    Products(const string &name, int price) : product_name(name), product_price(price) {}
    void setQuantity(int new_quantity)
    {
        quantity = new_quantity;
        cout << "The product quantity is successfully updated to " << new_quantity;
    };
    int getQuantity()
    {
        return quantity;
    }
    string getName()
    {
        return product_name;
    }
};
class Inventory
{
private:
    std::map<int, Products> products;

public:
    void addProduct(string product_name, int price)
    {
        static int next_id = 0;
        products[next_id] = Products(product_name, price);
        next_id++;
    }
    void removeProduct(int id)
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
    void updateQuantity(int id, int new_quantity)
    {
        products[id].setQuantity(new_quantity);
    }
    void findProductById(int id)
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
    void sortProductsByName()
    {
    }
    void listAllProducts()
    {
    }
    void listProductsBelowQuantity(int quantity)
    {
    }
    void calculateTotalInvemtoryValue()
    {
    }
};

class Menu
{
public:
    Menu(Inventory &currentInventory)
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
            cout << "Type (1-5) or Type 'exit' to exit\n"
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

                if (validity::invalid_id_check(id) || validity::invalid_product_quantity_check(quantity))
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

                if (validity::invalid_id_check(id))
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

                if (validity::invalid_product_quantity_check(quantity))
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
                currentInventory.calculateTotalInvemtoryValue();
            }
            else if (answer == "exit")
            {
                cout << "Good Bye! \n";
                break;
            }
        }
    }
};

int main()
{
    Inventory mainInventory;
    Menu mainMenu(mainInventory);

    return 0;
}