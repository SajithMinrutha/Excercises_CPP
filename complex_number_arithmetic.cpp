#include <iostream>
using std::cout;

class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex(double a, double b) : real(a), imaginary(b) {}
    Complex operator+(const Complex &other)
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    Complex operator-(const Complex &other)

    {
        return Complex(real - other.real, imaginary - other.imaginary);
    }
    Complex operator-() const
    {
        return Complex(-real, -imaginary);
    }
};

int main()
{

    return 0;
}