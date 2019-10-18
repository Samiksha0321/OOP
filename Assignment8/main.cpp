/*
Write a C++ program that creates an output file, writes information to it, closes the file
and open it again as an input file and read the information from the file.
*/
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    string si, so;

    fout.open("example.txt", ios::out);           //opens the file
    if (!fout)
    {
        cout << "Error in file creation\n";
    }
    else
    {
        cout << "Enter the string you want to enter into the file:\n";
        getline(cin, so);
        fout << so;
    }
    fout.close();            //closes the file

    fin.open("example.txt",ios::in);
    if(!fin){
        cout << "Error in file opening !\n";
    }
    else{
        cout<<"Now reading the file contents: \n";
        while(!fin.eof()){
            getline(fin, si);
            cout << si;
        }
        cout<<endl;
    }
    fin.close();

    return 0;
}
