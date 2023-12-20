#include<iostream>
using namespace std;

class number
{
    protected:
    int n;

    number()
    {
        cout << "Enter any number:";
        cin >> n;
    }
};

class cube : public number
{
    public:
    void c()
    {
        cout << "Number cube:" << n*n*n;
    }
};

class square : public number
{
    public:
    void s()
    {
        cout << "Number square:" << n*n << endl ;
    }
};

int main()
{
    square s1;
    cube c1;

    s1.s();
    c1.c();

    return 0;
}