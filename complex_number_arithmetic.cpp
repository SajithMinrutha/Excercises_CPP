#include <iostream>
using std::cout;
using std::endl;

class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex(double a = 0.0, double b = 0.0) : real(a), imaginary(b) {}

    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator-(const Complex &other) const
    {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    Complex operator-() const
    {
        return Complex(-real, -imaginary);
    }

    friend std::ostream &operator<<(std::ostream &os, const Complex &c);
    friend std::istream &operator>>(std::istream &is, Complex &c);

    void print() const
    {
        if (imaginary > 0)
            cout << real << " + " << imaginary << "i" << endl;
        else if (imaginary < 0)
            cout << real << " - " << -imaginary << "i" << endl;
        else
            cout << real << endl;
    }
};

std::ostream &operator<<(std::ostream &os, const Complex &c)
{
    os << "(" << c.real << ", " << c.imaginary << ")";
    return os;
}

std::istream &operator>>(std::istream &is, Complex &c)
{
    cout << "Enter real number: ";
    is >> c.real;
    cout << "Enter imaginary number: ";
    is >> c.imaginary;
    return is;
}

int main()
{
    Complex c1(3.5, 2.0);
    Complex c2(1.0, -1.5);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = -c1;

    c1.print();
    c2.print();
    c3.print();
    c4.print();
    c5.print();

    Complex c6;
    std::cin >> c6;
    cout << c6 << endl;

    return 0;
}
