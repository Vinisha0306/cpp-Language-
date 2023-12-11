#include<iostream>
using namespace std;

class car
{
    public:
    int id;
    char color[20],cname[20],modal[20],r_year[20];
};

int main()
{
    car c1,c2,c3,c4;

    cout << "Enter car ID:" ;  
    cin >> c1.id ;  
    cout << "Enter company name:" ;
    cin >> c1.cname ;
    cout << "Enter color:" ;
    cin >> c1.color ;
    cout << "Enter modal:" ;
    cin >> c1.modal ;
    cout <<"Enter release year:";
    cin >> c1.r_year ;

    cout << "Enter car ID:" ;  
    cin >> c2.id ;  
    cout << "Enter company name:" ;
    cin >> c2.cname ;
    cout << "Enter color:" ;
    cin >> c2.color ;
    cout << "Enter modal:" ;
    cin >> c2.modal ;
    cout <<"Enter release year:";
    cin >> c2.r_year ;

    cout << "Enter car ID:" ;  
    cin >> c3.id ;  
    cout << "Enter company name:" ;
    cin >> c3.cname ;
    cout << "Enter color:" ;
    cin >> c3.color ;
    cout << "Enter modal:" ;
    cin >> c3.modal ;
    cout <<"Enter release year:";
    cin >> c3.r_year ;

    cout << "Enter car ID:" ;  
    cin >> c4.id ;  
    cout << "Enter company name:" ;
    cin >> c4.cname ;
    cout << "Enter color:" ;
    cin >> c4.color ;
    cout << "Enter modal:" ;
    cin >> c4.modal ;
    cout <<"Enter release year:";
    cin >> c4.r_year ;

    cout << "id" << "\t" << "company name" << "\t" << "color" << "\t" << "modal" << "\t" << "release year" << endl;
    cout << c1.id << "\t" << c1.cname << "\t\t" << c1.color << "\t" << c1.modal << "\t" << c1.r_year << "\t\t" << endl;
    cout << c2.id << "\t" << c2.cname << "\t\t" << c2.color << "\t" << c2.modal << "\t" << c2.r_year << "\t\t" << endl;
    cout << c3.id << "\t" << c3.cname << "\t\t" << c3.color << "\t" << c3.modal << "\t" << c3.r_year << "\t\t" << endl;
    cout << c4.id << "\t" << c4.cname << "\t\t" << c4.color << "\t" << c4.modal << "\t" << c4.r_year << "\t\t" << endl;
    
    return 0;
}