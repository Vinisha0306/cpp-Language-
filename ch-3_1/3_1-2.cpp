#include<iostream>
#include<string.h>
using namespace std;

class Customer
{
    private:

    int id,age,simcard;
    long long int mn;
    char name[20],city[20],brand[20];

    public:

    void setdata()
    {
        cout << "Enter customer ID:";
        cin >> id;
        cout << "Enter customer Name:";
        fflush(stdin);
        gets(name);
        cout << "Enter customer Age:";
        cin >> age;
        cout << "Enter customer City:";
        fflush(stdin);
        gets(city);
        cout << "Enter customer Mobile number:";
        cin >> mn;
        cout << "Enter customer simcard validity:";
        cin >> simcard;
        cout << "Enter customer teletcom brand name:";
        fflush(stdin);
        gets(brand);
        cout << endl;

    }

    void getdata()
    {
        cout << "ID\t\t\t:" << id << endl
             << "Name\t\t\t:" << name << endl
             << "Age\t\t\t:" << age << endl
             << "City\t\t\t:" << city << endl
             << "Mobile number\t\t:" << mn << endl
             << "simcard validity\t:" << simcard << endl
             << "teletcom brand name\t:" << brand << endl;
    }
};

int main()
{
    Customer c1,c2,c3,c4,c5;

    c1.setdata();
    c2.setdata();
    c3.setdata();
    c4.setdata();
    c5.setdata();

    c1.getdata();
    c2.getdata();
    c3.getdata();
    c4.getdata();
    c5.getdata();

    return 0;
}
