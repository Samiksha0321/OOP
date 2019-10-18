/*
Write C++ program using STL  for Dequeue (Double ended queue) {deque}
*/
#include <bits/stdc++.h>
#include <deque>
using namespace std;
int main()
{
    deque<int> dq;
    deque<int>::iterator it;
hell:
    cout << "DEQUE using STL\n";
    cout << "1. PUSH_FRONT into deque\n";
    cout << "2. PUSH_BACK into deque\n";
    cout << "3. POP_FRONT into deque\n";
    cout << "4. POP_BACK into deque\n";
    cout << "5. FRONT element of the deque \n";
    cout << "6. BACK element of the deque \n";
    cout << "7. SIZE of the deque\n";
    cout << "8. Display the deque\n";
    int choice;
    int item;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter the element u want to push into the front of the deque\n";
        cin >> item;
        dq.push_front(item);
        break;
    case 2:
        cout << "Enter the element u want to push to the back of the deque\n";
        cin >> item;
        dq.push_back(item);
        break;
    case 3:
        item = dq.front();
        cout << item << " will be deleted from the front of the deque\n";
        dq.pop_front();
        break;
    case 4:
        item = dq.back();
        cout << item << " will be deleted from the back of the deque\n";
        dq.pop_back();
        break;
    case 5:
        cout << dq.front() << endl;
        break;
    case 6:
        cout << dq.back() << endl;
        break;
    case 7:
        cout << dq.size() << endl;
        break;
    case 8:
        for (it = dq.begin(); it < dq.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        break;
    default:
        cout << "Wrong choice entered \n";
    }
    cout<<"Do you want to continue? (y/n) \n";
    char y;
    cin>>y;
    if(y=='y')
        goto hell;
    else
        return 0;
}
