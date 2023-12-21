#include<iostream>
using namespace std;

class overloding
{ 
    public:

    void arithmatic(int a,int b)
    {
        cout << "division of a and b:" << a/b << endl;
    } 

    void arithmatic(int a,int b,int c)
    {
        cout << "subtraction of a , b and c:" << a-b-c << endl;
    }

    void arithmatic(int a,int b,int c,int d)
    {
        cout << "multiplication of a , b , c and d:" << a*b*c*d << endl;
    }

    void arithmatic(int a,int b,int c,int d,int e)
    {
        cout << "addition of a , b , c , d and e:" << a+b+c+d+e << endl;
    }
};

int main()
{
    overloding o1;

    o1.arithmatic(20,10);
    o1.arithmatic(10,20,30);
    o1.arithmatic(10,20,30,40);
    o1.arithmatic(10,20,30,40,50);

    return 0;
}