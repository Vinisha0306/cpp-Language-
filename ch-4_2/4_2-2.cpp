#include<iostream>
using namespace std;

class A
{
    public:

    int a=11;

};

class B : public A
{
    protected:

    int b=43;
};

class C : public A
{
    protected:

    int c=23;
};

class D : public B,public C
{
    protected:

    int d=42;

    public :
    
    void sum()
    {
        cout << "11 + 43 + 23 + 42 = " << B::a+b+c+d;
    }
};

int main()
{
    D o1;

    o1.sum();

    return 0;
}