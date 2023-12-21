#include<iostream>
using namespace std;

class A
{
    protected:

    int a;

};

class B : public A
{
    protected:

    int b;
};

class C : public A
{
    protected:

    int c;
};
class D : public B,public C
{
    protected:

    int d;

    public :

    void sum()
    {
        cout << "11 + 43 + 23 + 42 = " << 11+43+23+42;
    }
};

int main()
{
    D o1;

    o1.sum();

    return 0;
}