#include<iostream>
using namespace std;

class X 
{
    protected:

    int a,b,c;
};

class Y : public X
{
    public:

    void setdata()
    {
        cout << "Enter a:";
        cin >> a;
        cout << "Enter b:";
        cin  >> b;
        cout << "Enter c:";
        cin >> c;
    }

    void getdata()
    {
        cout << " A : " << a << endl << " B : " << b << endl << " C : " << c;
    }

    void sum_cubes()
    {
        cout << endl << "sum of a,b,c cubes:" << (a*a*a)+(b*b*b)+(c*c*c);
    }
};

int main()
{
    Y o1;

    o1.setdata();
    o1.getdata();
    o1.sum_cubes();

    return 0;
}