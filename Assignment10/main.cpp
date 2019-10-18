/*
Write a function template selection sort.
Write a program that inputs, sorts and outputs an int array and a float array.
*/
#include <bits/stdc++.h>
using namespace std;

template <class T>
void SORT(T array, int size)
{
    int i, j, min_idx;
    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_idx])
                min_idx = j;
        }
        swap(array[min_idx], array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int choice, n;
hell:
    cout << "1. Integer Array";
    cout << "\n2. Float Array";
    cout << "\n Enter your choice of the array and size: ";
    cin >> choice >> n;
    int arr[n];
    float arr1[n];
    switch (choice)
    {
    case 1:
        cout << "\nNow enter your numbers of the integer array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "\nThe elements of your array after selection sort is: ";
        SORT(arr, n);
        break;
    case 2:
        cout << "\nNow enter your numbers of the float array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        cout << "\nThe elements of your array after selection sort is: ";
        SORT(arr1, n);
        break;
    default:
        cout << "\n You have entered a wrong choice:{";
        break;
    }
    cout << "Continue(y/n)? \n";
    char yes;
    cin >> yes;
    if (yes == 'y')
        goto hell;
    else
        //do nothing
        return 0;
}
