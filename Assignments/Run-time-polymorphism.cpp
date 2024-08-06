#include<iostream>
using namespace std;

class shape
{
    public:
    virtual void  input()
    {
        //?
        cout<<"\n ===shape::input()===";
    }
    virtual void calArea()
    {
        //?
         cout<<"\n ===shape::calArea()===";
    }
};
class rect:public shape
{
    int l,b;
    public:
    void input()
    {
        cout<<"\n Enter l and b for rect";
        cin>>l>>b;
    }
    void calArea()
    {
        int a=l*b;
         cout<<"\n area of rect="<<a;
    }
};
class circle:public shape
{
    int r;
    public:
    void input()
    {
        cout<<"\n Enter r for circle";
        cin>>r;
    }
    void calArea()
    {
        int a=3.14*r*r;
         cout<<"\n Area of circle="<<a;
    }
};



int main()
{
    shape *sptr=NULL;
    rect r1;
    circle c1;
    int ch;
    do
    {
        cout<<"\n 1:rect   2: circle   0:exit";
        cin>>ch;
        switch (ch)
        {
        case 1: //rect
            sptr = &r1;
            break;
        case 2: //circle
            sptr = &c1;
            break;
        }
        if(sptr != NULL)
        {
            sptr->input();
            sptr->calArea();
        }
        sptr = NULL;
    } while (ch!=0);
    







    // shape *sptr=NULL;
    // rect r1;
    // sptr=&r1;
    // sptr->input();
    // sptr->calArea();



    // shape sp1;
    // sp1.input();
    // sp1.calArea();

    // rect r1;
    // r1.input();
    // r1.calArea();

    // circle c1;
    // c1.input();
    // c1.calArea();
    return 0;
}