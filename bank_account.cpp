#include <iostream>
#include <string>

class BankAccount
{
private:
    std::string account_holder;
    double balance;

public:
    BankAccount(std::string account_holder_name, double balance_initial)
        : account_holder(account_holder_name), balance(balance_initial)
    {
        if (balance_initial < 0)
        {
            std::cout << "Invalid Amount! Account creation failed\n";
        }
        else
        {
            std::cout << "Account created successfully!\n";
        }
    }

    double getBalance() const
    {
        return balance;
    }

    void deposit(double amount)
    {
        if (amount < 0)
            std::cout << "Invalid deposit\n";
        else
            balance += amount;
    }

    double withdraw(double amount)
    {
        if (amount < 0 || amount > balance)
        {
            std::cout << "Sorry You cannot withdraw that amount!\n";
            return 0.0;
        }
        balance -= amount;
        return amount;
    }
};

int main()
{
    BankAccount myAccount("Minrutha", 1000);

    std::cout << "Balance: " << myAccount.getBalance() << "\n";

    myAccount.deposit(200);
    std::cout << "After deposit: " << myAccount.getBalance() << "\n";

    myAccount.withdraw(100);
    std::cout << "After withdraw: " << myAccount.getBalance() << "\n";

    return 0;
}
