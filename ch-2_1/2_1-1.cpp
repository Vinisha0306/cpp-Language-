#include<iostream>
using namespace std;

class employee{
    public:
    int id,age,exp;
    char name[20],role[20],city[20], cname[20];
};

int main()
{
    employee e1,e2,e3,e4,e5;

    cout << "Enter employee ID:" ;  
    cin >> e1.id ;  
    cout << "Enter Your name:" ;
    cin >> e1.name ;
    cout << "Enter your age:" ;
    cin >> e1.age ;
    cout << "Enter your Role:" ;
    cin >> e1.role ;
    cout <<"Enter your city:";
    cin >> e1.city ;
    cout << "Enter your experience:" ;
    cin >> e1.exp;
    cout << "Enter your company_name:";
    cin >> e1.cname;

    cout << endl << "Enter employee ID:" ;  
    cin >> e2.id ;  
    cout << "Enter Your name:" ;
    cin >> e2.name ;
    cout << "Enter your age:" ;
    cin >> e2.age ;
    cout << "Enter your Role:" ;
    cin >> e2.role ;
    cout <<"Enter your city:";
    cin >> e2.city ;
    cout << "Enter your experience:" ;
    cin >> e2.exp;
    cout << "Enter your company_name:";
    cin >> e2.cname;

    cout << endl << "Enter employee ID:" ;  
    cin >> e3.id ;  
    cout << "Enter Your name:" ;
    cin >> e3.name ;
    cout << "Enter your age:" ;
    cin >> e3.age ;
    cout << "Enter your Role:" ;
    cin >> e3.role ;
    cout <<"Enter your city:";
    cin >> e3.city ;
    cout << "Enter your experience:" ;
    cin >> e3.exp;
    cout << "Enter your company_name:";
    cin >> e3.cname;

    cout << endl << "Enter employee ID:" ;  
    cin >> e4.id ;  
    cout << "Enter Your name:" ;
    cin >> e4.name ;
    cout << "Enter your age:" ;
    cin >> e4.age ;
    cout << "Enter your Role:" ;
    cin >> e4.role ;
    cout <<"Enter your city:";
    cin >> e4.city ;
    cout << "Enter your experience:" ;
    cin >> e4.exp;
    cout << "Enter your company_name:";
    cin >> e4.cname;

    cout << endl << "Enter employee ID:" ;  
    cin >> e5.id ;  
    cout << "Enter Your name:" ;
    cin >> e5.name ;
    cout << "Enter your age:" ;
    cin >> e5.age ;
    cout << "Enter your Role:" ;
    cin >> e5.role ;
    cout <<"Enter your city:";
    cin >> e5.city ;
    cout << "Enter your experience:" ;
    cin >> e5.exp;
    cout << "Enter your company_name:";
    cin >> e5.cname;

    cout << "id" << "\t" << "name" << "\t" << "age" << "\t" << "role" << "\t" << "city" << "\t" << "experience" << "\t" << "company_name:" << endl;
    cout << e1.id << "\t" << e1.name << "\t" << e1.age << "\t" << e1.role << "\t" << e1.city << "\t" << e1.exp << "\t" << e1.cname << endl;
    cout << e2.id << "\t" << e2.name << "\t" << e2.age << "\t" << e2.role << "\t" << e2.city << "\t" << e2.exp << "\t" << e2.cname << endl;
    cout << e3.id << "\t" << e3.name << "\t" << e3.age << "\t" << e3.role << "\t" << e3.city << "\t" << e3.exp << "\t" << e3.cname << endl;
    cout << e4.id << "\t" << e4.name << "\t" << e4.age << "\t" << e4.role << "\t" << e4.city << "\t" << e4.exp << "\t" << e4.cname << endl;
    cout << e5.id << "\t" << e5.name << "\t" << e5.age << "\t" << e5.role << "\t" << e5.city << "\t" << e5.exp << "\t" << e5.cname << endl;

    return 0;
}