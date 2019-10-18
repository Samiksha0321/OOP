/*
Crete User defined exception to check the following conditions and throw the exception if the criterion does not meet.
a. User has age between 18 and 55
b. User has income between Rs. 50,000 – Rs. 1,00,000 per month
c. User stays in Pune/Mumbai/Bangalore/Chennai
d. User has 4-wheeler
Accept age, income, city, vehicle from the user and check for the conditions mentioned above.
If any of the condition does not met then throw an exception.
*/
#include<iostream>
#include<exception>
#include<string.h>
using namespace std;

int main(){
    int age,income,vehicle;
    char city[10];

    cout<<"Enter age: ";
    cin>>age;
    try{
        if(age<18||age>55)
            throw runtime_error("Age should be between 18 and 55");
    }
    catch(const exception &e){
        cout<<"Exception caught :\n"<<e.what();
    }

    cout << "\nEnter income: ";
    cin >> income;
    try
    {
        if (income < 50000 || age > 100000)
            throw runtime_error("Income should be between 50000 and 100000");
    }
    catch (const exception &e)
    {
        cout << "Exception caught :\n"<< e.what();
    }

    cout << "\nEnter city: ";
    cin >> city;
    try
    {
        if (strcmp(city, "Pune") && strcmp(city, "Banglore") && strcmp(city, "Chennai") && strcmp(city, "Mumbai"))
            throw runtime_error("City should be Pune/Mumbai/Bangalore/Chennai");
    }
    catch (const exception &e)
    {
        cout << "Exception caught :\n"<< e.what();
    }

    cout << "\n4 wheeler or 2 wheeler (2 or 4 )? : ";
    cin >> vehicle;
    try
    {
        if (vehicle!=4)
            throw runtime_error("Vehicle should be 4 wheeler ");
    }
    catch (const exception &e)
    {
        cout << "Exception caught :\n"<< e.what();
    }

    return 0;
}
