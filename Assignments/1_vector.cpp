#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    cout << "Size of v1 - " << v1.size() << endl;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);
    cout << "Size of v1 - " << v1.size() << endl;

    for (int i = 0; i < v1.size(); i++)
        cout << "element - " << v1[i] << endl;
    // cout << "element - " << v1.at(i) << endl;

    return 0;
}