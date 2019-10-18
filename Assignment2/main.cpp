/*
Implement a class Complex which represents the Complex Number data type.
Implement the following operations:
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read complex Numbers.
*/
#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int x, y;

public:
    Complex()
    {
        x = 0;
        y = 0;
    }
    friend Complex operator+(Complex &, Complex &);
    friend Complex operator*(Complex &, Complex &);
    friend ostream &operator<<(ostream &, const Complex &);
    friend istream &operator>>(istream &, Complex &);
};

Complex operator+(Complex &c1, Complex &c2)
{
    Complex temp;
    temp.x = c1.x + c2.x;
    temp.y = c1.y + c2.y;
    return temp;
}

Complex operator*(Complex &c1, Complex &c2)
{
    Complex temp;
    temp.x = (c1.x * c2.x) - (c1.y * c2.y);
    temp.y = (c1.x * c2.y) + (c2.x * c1.y);
    return temp;
}

istream &operator>>(istream &input, Complex &c)
{
    cout << "\n\nEnter Real Part ";
    input >> c.x;
    cout << "\nEnter Imaginary Part ";
    input >> c.y;
    return input;
}

ostream &operator<<(ostream &output, const Complex &c)
{
    output << c.x << " + " << c.y << "i" << endl;
    return output;
}

int main()
{
    Complex c1, c2, c3, c4;
    cin >> c1;
    cout << "\nComplex number c1 is :";
    cout << c1;
    cin >> c2;
    cout << "\nComplex number c2 is  :";
    cout << c2;
    c3 = c1 + c2;
    cout << "\nAddition of c1 and c2 is c3 = " << c3;
    c4 = c1 * c2;
    cout << "\nMultiplication of c1 and c2 is c4 = " << c4;
    return 0;
}
