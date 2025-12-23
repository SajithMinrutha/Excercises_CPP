#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // WRITE TO FILE
    std::ofstream outfile("readme.txt");

    if (outfile.is_open())
    {
        std::cout << "File opened successfully\n";
        outfile << "Hello\n";
        outfile << "This is the second line\n";
        outfile.close();
        std::cout << "File closed successfully\n";
    }
    else
    {
        std::cout << "Error opening the file!\n";
        return 1;
    }

    // READ FROM FILE
    std::ifstream infile("readme.txt");

    if (infile.is_open())
    {
        std::cout << "Reading file:\n";
        std::string line;

        while (std::getline(infile, line))
        {
            std::cout << line << std::endl;
        }
        infile.close();
    }
    else
    {
        std::cout << "Error opening the file for reading!\n";
    }

    return 0;
}
