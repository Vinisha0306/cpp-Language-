#include<iostream>
using namespace std;

class a
{
    protected:
    int id,salary,expe,contect;
    char name[20],role[20],comp[20],address[20],email[20];

    public:

    void c1()
    {
        cout << "Enter id:";
        cin >> id;
        cout << "Enter name:";
        fflush(stdin);
        cin >> name;
        cout << "Enter role:";
        cin >> role;
    }
};

class b : public a
{
    public:

    void c2()
    {
        cout << "Enter salary:";
        cin >> salary;
        cout << "Enter experience:";
        cin >> expe;
    }
};

class c : public b                  
{
    public:

    void c3()
    {
        cout << "Enter company name:";
        fflush(stdin);
        cin >> comp;
        cout << "Enter address:";
        cin >> address;
        cout << endl ;

        cout << endl << endl << "Name : " << name << endl << "Role : " << role << endl << "Salary : " << salary << endl;

    }
};

class d : public c
{
    public:

    void c4()
    {
        cout << "Enter email :";
        cin >> email;
        cout << "Enter contect number:";
        cin >> contect;

        cout << endl << endl << "id : " << id  << endl << "Name : " << name << endl << "Role : " << role << endl << "Salary : " << salary << endl << "experience : " << expe << endl << "company name : " << comp << endl << "address" << address << endl << "email : "<< email << endl << "contact : " << contect << endl ;

    }
};

int main()
{
    d o1;

    o1.c1();
    o1.c2();
    o1.c3();
    o1.c4();

    return 0;
}