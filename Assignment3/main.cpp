/*
Implement a class Quadratic that represents degree two polynomials i.e., polynomials of type ax2 +bx+c.
The class will require three data members corresponding to a, b and c.
Implement the following operations:
. A constructor (including a default constructor which creates the 0 polynomial).
. Overloaded operator+ to add two polynomials of degree 2.
. Overloaded << and >> to print and read polynomials. To do this, you will need to decide what you want your input and output format to look like.
. A function eval that computes the value of a polynomial for a given value of x.
. A function that computes the two solutions of the equation ax2 +bx+ c=0.
*/

#include <bits/stdc++.h>
using namespace std;

class Quadratic
{
private:
    int a, b, c;

public:
    Quadratic()
    {
        a = b = c = 0;
    }
    Quadratic(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    friend Quadratic operator+(Quadratic &, Quadratic &);
    friend ostream &operator<<(ostream &, const Quadratic &);
    friend istream &operator>>(istream &, Quadratic &);
    int eval(int);
    void solve_equation();
};

Quadratic operator+(Quadratic &q1, Quadratic &q2)
{
    Quadratic temp;
    temp.a = q1.a + q2.a;
    temp.b = q1.b + q2.b;
    temp.c = q1.c + q2.c;
    return temp;
}

ostream &operator<<(ostream &output, const Quadratic &q)
{
    output << q.a << " x^2 + " << q.b << " x+ " << q.c << endl;
}

istream &operator>>(istream &input, Quadratic &q)
{
    cout << "Enter the values of a,b and c" << endl;
    input >> q.a >> q.b >> q.c;
}

int Quadratic::eval(int x)
{
    int result;
    result = (a * x * x) + (b * x) + c;
    return result;
}

void Quadratic::solve_equation()
{
    int discriminant, sol1, sol2;
    discriminant = sqrt(pow(b, 2) - 4 * a * c);
    if (discriminant >= 0)
    {
        sol1 = (-b + discriminant) / (2 * a);
        sol2 = (-b - discriminant) / (2 * a);
        cout << "The solutions of the equations are: " << sol1 << " and " << sol2 << endl;
    }
    else
    {
        int real1, real2, imag1, imag2;
        real1 = (-b) / (2 * a);
        real2 = real1;
        imag1 = discriminant / (2 * a);
        imag2 = discriminant / (2 * a);
        cout << "The solutions of the equations are: " << real1 << " + " << imag1 << " i"
             << " and " << real2 << " - " << imag2 << " i" << endl;
    }
}

int main()
{
    Quadratic q1, q2, q3;
hell:
    cout << "1 Display default polynomial\n";
    cout << "2 Accept & display polynomial\n";
    cout << "3 Add two polynomial\n";
    cout << "4 Find f(x) for given x\n";
    cout << "5 Find roots of give polynomial\n";
    cout << "Enter your choice\n";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << q1;
        break;
    case 2:
        cin >> q1;
        cout << q1;
        break;
    case 3:
        cin >> q2;
        q3 = q1 + q2;
        cout << q3;
        break;
    case 4:
        cout << "Enter value of x for which you want to compute the value of f(x)" << endl;
        int x;
        cin >> x;
        cout << "The value of f(" << x << ") is : " << q1.eval(x);
        break;
    case 5:
        q1.solve_equation();
        break;
    default:
        cout << "You have entered a wrong choice !" << endl;
    }
    cout << "\nDo you want to continue? (y/n)";
    char y;
    cin >> y;
    if (y == 'y')
        goto hell;
    else
        //do nothing;
        return 0;
}
