#include<iostream>
using namespace std;

class A
{
public:
    int a;
    
    void set()
    {
        cout << "Enter A:";
        cin >> a;
    }
    
    bool operator<(A n2)
    {
        if(this->a<n2.a)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};

int main()
{
    A a1,a2;
    
    a1.set();
    a2.set();
    
    if(a1<a2)
    {
        cout << endl << "A2 is max";
    }
    else
    {
        cout << endl << "A1 is max";
    }
    
    return 0;
}