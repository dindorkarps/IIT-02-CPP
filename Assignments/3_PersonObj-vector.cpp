#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Person
{
private:
    string name;

public:
    void accept()
    {
        cout << "Enter name - ";
        cin >> name;
    }

    void display()
    {
        cout << "Name - " << name << endl;
    }
};

int menu()
{
    int choice;
    cout << "0.EXIT" << endl;
    cout << "1.Add Person" << endl;
    cout << "2.Display All Persons" << endl;
    cout << "Enter Choice - ";
    cin >> choice;
    return choice;
}

int main()
{
    int choice;
    vector<Person *> personList;
    Person *ptr = NULL;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            ptr = new Person();
            ptr->accept();
            personList.push_back(ptr);
            break;
        case 2:
            for (int i = 0; i < personList.size(); i++)
                personList[i]->display();
            break;
        default:
            cout << "Wrong choice - " << endl;
            break;
        }
    }
    for (int i = 0; i < personList.size(); i++)
        delete personList[i];
    return 0;
}

int main1()
{
    vector<Person *> personList;
    Person *ptr = NULL;

    ptr = new Person();
    ptr->accept();
    personList.push_back(ptr);

    ptr = new Person();
    ptr->accept();
    personList.push_back(ptr);

    // to display all persons
    for (int i = 0; i < personList.size(); i++)
        personList[i]->display();

    // to delete all persons
    for (int i = 0; i < personList.size(); i++)
        delete personList[i];

//---------------------------------------------------
    list<Person> personList1; 
    Person p;
    p.accept();
    personList1.push_back(p);
    for (list<Person>::iterator it = personList1.begin(); it != personList1.end(); it++)
		it->display();


    return 0;
}+