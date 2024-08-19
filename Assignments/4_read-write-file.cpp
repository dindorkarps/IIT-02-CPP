#include <iostream>
#include <fstream>
using namespace std;

void writeIntoFile()
{
    string name;
    cout << "Enter the course name - ";
    cin >> name;

    ofstream fout("file1.txt", ios::app);
    fout << name << endl;
    fout.close();
}

void readFromFile()
{
    ifstream fin("file1.txt");
    string data;

    string name;
    cout << "Enter Full name - ";
    getline(cin, name);

    while (getline(fin, data))
    {
        cout << data << endl;
    }
    fin.close();
}

int main()
{
    // writeIntoFile();
    readFromFile();
    return 0;
}