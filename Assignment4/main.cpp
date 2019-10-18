/*
Write a C++ program to create a calculator for an arithmetic operator (+, -, *, /).
The program should take two operands from user and performs the operation on those two operands
depending upon the operator entered by user. Use a switch statement to select the operation.
Finally, display the result. Some sample interaction with the program might look like this:
Enter first number, operator, second number: 10 / 3
Answer = 3.333333
Do another (y/n)? y
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n
*/
#include <bits/stdc++.h>
using namespace std;
class CALCULATOR
{
private:
    int a, b;

public:
    void add(float a, float b)
    {
        cout << a + b << endl;
    }
    void sub(float a, float b)
    {
        cout << a - b << endl;
    }
    void mul(float a, float b)
    {
        cout << a * b << endl;
    }
    void div(float a, float b)
    {
        cout << float(a / b) << endl;
    }
};
int main()
{
    CALCULATOR c;

hell:
    float f, s;
    char op, ch;
    cout << "Enter first number, operator, second number" << endl;
    cin >> f >> op >> s;
    switch (op)
    {
    case '+':
        c.add(f, s);
        break;
    case '-':
        c.sub(f, s);
        break;
    case '*':
        c.mul(f, s);
        break;
    case '/':
        c.div(f, s);
        break;
    default:
        cout << "Wrong operator entered" << endl;
        break;
    }
    cout << "Do another(y / n) ?" << endl;
    cin >> ch;
    if (ch == 'y')
        goto hell;
    else
        // do nothing
        return 0;
}
