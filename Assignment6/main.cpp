/*
Create employee bio-data using following classes
i) Personal record
ii) Professional record
iii) Academic record
Assume appropriate data members and member function to accept required data & print bio-data.
Create bio-data using multiple inheritances using C++.
*/
#include<bits/stdc++.h>
using namespace std;
class Personal{
protected:
    string name,address,birthdate,gender;
public:
    void get_personal();
};

class Professional{
protected:
    string noofyears_exp, orgname, proj_name, proj_details;
public:
    void get_professional();
};

class Academic{
protected:
    string year, marks, percentage, Class;            //class not used,as its a keyword
public:
    void get_academic();
};

class Biodata: public Personal, public Professional, public Academic{
    public:
    void display();
};

void Personal::get_personal()
{
    cout << "Enter name of the employee: ";
    cin >> name;
    cout << "Enter Address: ";
    cin >> address;
    cout << "Enter Birthdate(dd/mm/yyyy): ";
    cin >> birthdate;
    cout << "Enter gender(M/F): ";
    cin >> gender;
}
void Professional::get_professional()
{
    cout << "Enter number of years of exp: ";
    cin >> noofyears_exp;
    cout << "Enter organization name: ";
    cin >> orgname;
    cout << "Enter project name: ";
    cin >> proj_name;
    cout << "Enter project Details: ";
    cin >> proj_details;
}
void Academic::get_academic()
{
    cout << "Enter academic year: ";
    cin >> year;
    cout << "Enter total marks: ";
    cin >> marks;
    cout << "Enter percentage: ";
    cin >> percentage;
    cout << "Enter class: ";
    cin >> Class;
}
void Biodata::display()
{
    cout << "\n\n\n\n\n\n\n\n\n\n";
    cout << "***************************Employee Biodata**************************" << endl;
    cout << "*********************************************************************" << endl;
    cout << "___________________________Personal Details__________________________" << endl;
    cout << "\t\t\t";
    cout << "Name: " << name << endl;
    cout << "\t\t\t";
    cout << "Address: " << address << endl;
    cout << "\t\t\t";
    cout << "Birthdate: " << birthdate << endl;
    cout << "\t\t\t";
    cout << "Gender: " << gender << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "_________________________Academic Details____________________________" << endl;
    cout << "Academic Year "
         << "      Marks "
         << "   Percentage "
         << "   Class " << endl;
    cout << year << "\t\t    " << marks << "\t\t" << percentage << "\t       " << Class << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "_________________________Professional Details________________________" << endl;
    cout << "\t\t\t";
    cout << "Organization Name::" << orgname << endl;
    cout << "\t\t\t";
    cout << "Years of Experince::" << noofyears_exp << endl;
    cout << "\t\t\t";
    cout << "Project Done::" << proj_name << endl;
    cout << "\t\t\t";
    cout << "Project Details::" << proj_details << endl;
}

int main(){
    Biodata b;
    b.get_personal();
    b.get_professional();
    b.get_academic();
    b.display();
    return 0;
}
