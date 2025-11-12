class Inventory
{
public:
    void addProduct() {}
    void removeProduct() {}
    void updateQuantity() {}
    void findProductById() {}
    void sortProductsByName() {}
    void listAllProducts() {}
    void listProductsBelowQuantity() {}
    void calculateTotalInvemtoryValue() {}
};
class Menu
{
public:
    Menu(Inventory &inv) {}
};

int main()
{
    Inventory MainInventory;

    Menu menu(MainInventory);

    return 0;
}