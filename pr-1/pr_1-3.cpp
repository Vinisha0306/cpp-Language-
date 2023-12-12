#include<iostream>
using namespace std;

class sum
{
    int a=10,b=20;
    
    int add(int a,int b)
    {
        cout << "sum=" << a+b;
    }
};

// class sum cannot use in main function

class name
{
    public:
    char surname[20],name[20],lastname[20];
};

// class name is public so can use in main function

int main()
{
    name n,a;
    
    cout << "Enter your surname:";
    cin >> n.surname;
    cout << "Enter your name:";
    cin >> n.name;
    cout << "Enter your last name:";
    cin >> n.lastname;
    
    cout << endl << n.surname  << " " << n.name << " " << n.lastname;
    
    return 0;
}