/*
Write a C++ program using command line arguments to search for a word in a file and replace it with the specified word.
The usage of the program is shown below.
$ change <old word> <new word> <file name>
*/
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
    ifstream fin(argv[1]);
    if (argc < 4)
    {
        cout << "\nInvalid arguments.";
        exit(1);
    }
    if (!fin)
    {
        cout << "\nError in opening file.";
        exit(1);
    }
    string replace_data="",data,old=argv[2];
    int found;
    while(!fin.eof()){
        getline(fin,data);
        found=data.find(old);
        while(data.find(old)<500){
            data.replace(found,old.size(),argv[3]);
            found=data.find(old);
        }
        replace_data = replace_data + data + "\n";
    }
    fin.close();

    ofstream out(argv[1]);
    out << replace_data << endl;
    out.close();

    ifstream fin2(argv[1]);
    while (!fin2.eof())
    {
        getline(fin2, data);
        cout << data;
    }
    fin2.close();

    return 0;
}
