#include <iostream>
#include <thread>
#include <string>

void printNumbers(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        std::cout << "Thread ID:" << std::this_thread::get_id() << "Number:" << i << std::endl;
    }
}
int main()
{

    std::cout << "Hello this is dedicated for the multithreading project" << std::endl;
    std::thread t1(printNumbers, 1, 5);
    std::thread t2(printNumbers, 6, 10);

    t1.join();
    t2.join();

    return 0;
}