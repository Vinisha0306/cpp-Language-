#include<iostream>
using namespace std;

class shape
{
    protected :

    float r_l,r_b;

    shape()
    {
        cout << "Enter width:";
        cin >> r_b;
        cout << "Enter heigth:";
        cin >> r_l;
        cout << "Enter rectangle:" << endl;
    }
};

class triangle : public shape
{
    public:

    void area()
    {
        cout << "Enter triangle:" << endl;
        cout << "area of triangle:" << 0.5*r_l*r_b << endl << endl;
    }
};

class rectangle : public shape
{
    public:
    void area1()
    {
        cout << "enter rectangle:" << endl;
        cout << "area of rectangle:" << r_l*r_b << endl;
    }
};

int main()
{
    triangle t1;
    rectangle r1;

    t1.area();
    r1.area1();

    return 0;
}