#include "../include/service.h"
#ifndef OIL_H
#define OIL_H
class Oil : public Service
{
private:
    double cost;

public:
    Oil();
    Oil(double cost);
    double getCost();
    void setCost(double cost);
    double price();
    void input();
};
#endif
