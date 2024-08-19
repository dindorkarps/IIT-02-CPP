#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

class Employee
{
private:
    int empid;
    double salary;
    string name;

    void writeIntoFile()
    {
        ofstream fout("emp.txt", ios::app);
        fout << empid << "," << name << "," << salary << endl;
        fout.close();
    }

public:
    Employee()
    {
    }
    Employee(int empid, string name, double salary)
    {
        this->empid = empid;
        this->name = name;
        this->salary = salary;
    }
    void accept()
    {
        cout << "Enter empid - ";
        cin >> empid;
        cout << "Enter name - ";
        cin >> name;
        cout << "Enter salary - ";
        cin >> salary;
        writeIntoFile();
    }
    void display()
    {
        cout << "Empid - " << empid << endl;
        cout << "Name - " << name << endl;
        cout << "Salary - " << salary << endl;
    }
};

int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Add Employee" << endl;
    cout << "2. Display All employees" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    return choice;
}

void loadData(vector<Employee *> &empList)
{
    ifstream fin("emp.txt");
    string data;
    while (getline(fin, data))
    {
        // convert string data to employee
        string empid;
        string name;
        string salary;

        stringstream mydata(data);

        getline(mydata, empid, ',');
        getline(mydata, name, ',');
        getline(mydata, salary, ',');

        // add the employee into the vector
        Employee *ptr = new Employee(stoi(empid), name, stod(salary));
        empList.push_back(ptr);
    }
    fin.close();
}

int main()
{

    vector<Employee *> empList;
    loadData(empList);

    Employee *eptr;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            eptr = new Employee();
            eptr->accept();
            empList.push_back(eptr);
            break;
        case 2:
            for (int i = 0; i < empList.size(); i++)
                empList[i]->display();
            break;
        default:
            break;
        }
    }
    for (int i = 0; i < empList.size(); i++)
        delete empList[i];
    return 0;
}

/*
    vector -> delete
    emplist.erase()
    fout("emp.txt");
    for(vector iterate)
    {
        fout<<getid()<<,<<getname<<,<<getsal<<endl;
    }
*/