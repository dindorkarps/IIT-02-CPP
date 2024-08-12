#include "../include/oil.h"

Oil::Oil()
{
}

Oil::Oil(double cost)
{
    this->cost = cost;
}

double Oil::getCost()
{
    return cost;
}

void Oil::setCost(double cost)
{
    this->cost = cost;
}

double Oil::price()
{
    return cost;
}

void Oil::input()
{
    getchar();
    string desc;
    cout << "Enter the oil/Additive description - ";
    getline(cin, desc);
    this->setDesc(desc);
    cout << "Enter price - ";
    cin >> cost;
}