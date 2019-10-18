/*
Write C++ program using STL for implementation of stack & queue using SLL
*/
#include <bits/stdc++.h>
#include <list>
using namespace std;
int main()
{
    list<int> S, Q;
    list<int>::iterator it;
hell:
    cout << "\n1. STACK \n";
    cout << "2. QUEUE\n";
    cout << "Enter your choice\n";
    int choice, item;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "\nSTACK\n";
        cout << "1. PUSH \n";
        cout << "2. POP\n";
        cout << "3. DISPLAY TOP ELEMENT of the STACK\n";
        cout << "4. SIZE OF THE STACK \n";
        cout << "5. DISPLAY THE STACK \n";
        cout << "Enter your choice\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter element to be pushed into the stack: \n";
            cin >> item;
            S.push_back(item);
            break;
        case 2:
            cout << "Element to be deleted from the stack is: \n";
            cout << S.back() << "deleted from the stack";
            S.pop_back();
            break;
        case 3:
            cout << S.back() << endl;
            break;
        case 4:
            cout << S.size() << endl;
            break;
        case 5:
            for (int i = S.begin(); i <= S.end(); i++)
            {
                cout << *it << " ";
            }
            cout << endl;
        }
        break;
    }
    case 2:
    {
        cout << "\nQUEUE\n";
        cout << "1. PUSH \n";
        cout << "2. POP\n";
        cout << "3. DISPLAY FRONT ELEMENT of the QUEUE\n";
        cout << "4. DISPLAY REAR ELEMENT of the QUEUE\n";
        cout << "5. SIZE OF THE STACK \n";
        cout << "6. DISPLAY THE QUEUE \n";
        cout << "Enter your choice\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter element to be pushed into the stack: \n";
            cin >> item;
            Q.push_back(item);
            break;
        case 2:
            cout << "Element to be deleted from the queue is : \n";
            cout << Q.front() << "deleted frm the queue";
            Q.pop_front();
            break;
        case 3:
            cout << Q.front() << endl;
            break;
        case 4:
            cout << Q.back() << endl;
            break;
        case 5:
            cout << Q.size() << endl;
            break;
        case 6:
            for (int i = S.begin(); i <= S.end(); i++)
            {
                cout << *it << " ";
            }
            cout << endl;
        }
    }
    break;
    }
    goto hell;

    return 0;
}
/*
 READY-RECOKNER FOR STACK under STL
 stack<int> s;
 s.push();  ----      pushes element to the top of the stack
 s.pop();   ----      pops the element from the top of the stack
 s.top();   ----      returns the top element of the stack
 s.size();  ----      returns the size of the stack
 --------------------------------------------------------------------
READY-RECOKNER FOR QUEUE under STL
queue<int> q;
q.push();  ----      pushes element to the back of the queue
q.pop();   ----      pops the element from the front of the queue
q.front(); ----      returns the first element of the queue
q.back();  ----      returns the last element of the queue
q.size();  ----      returns the size of the queue
----------------------------------------------------------------------
READY-RECOKNER FOR LIST under STL
list<int> s,q;
s.push_front();
s.push_back();
s.pop_back();
s.pop_front();
*/
