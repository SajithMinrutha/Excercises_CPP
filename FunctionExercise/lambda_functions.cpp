#include <iostream>
#include <string>

int main()
{
    auto greet = []()
    {
        std::cout << "Hello !!!" << std::endl;
    };
    greet();

    return 0;
}