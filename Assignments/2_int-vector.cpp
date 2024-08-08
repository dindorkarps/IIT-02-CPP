#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
        cout << "Element at " << i << " - " << v[i] << endl;
}
// todo -> test the end() in the insert() and erase() -> returns iterator

int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);
    display(v1);

    // to add the elements in between
    v1.insert(v1.begin(), 100);
    v1.insert(v1.begin() + 2, 300);

    cout << "After adding element - " << endl;
    display(v1);

    return 0;
}

int main2()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);
    display(v1);

    // to delete the element in between
    v1.erase(v1.begin());
    v1.erase(v1.begin() + 2);
    cout << "After removing element - " << endl;
    display(v1);

    return 0;
}

int main1()
{
    vector<int> v1;
    // to add the element in vector
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);
    display(v1);

    // to remove the last added element from vector
    v1.pop_back();
    v1.pop_back();
    cout << "After removing elements - " << endl;
    display(v1);

    return 0;
}