#include<iostream>
#include<string.h>
using namespace std;

class companies
{
    int id,staff,year,raw_year,export_year;
    char name[20];
    static char ceo[20];

    companies()
    {
        cout << "Enter companie ID:";
        cin >> id;
        cout << "Enter companie Name:";
        fflush(stdin);
        gets(name);
        cout << "Enter companie Staff quantity:";
        cin >> staff;
        cout << "Enter companie Revenue(per year):";
        cin >> year;
        cout << "Enter companie import raw diamonds(no.of raw diamonds imported per year):";
        cin >> raw_year;
        cout << "Enter companie export diamonds(no. of diamonds per year):";
        cin >> export_year;

    }
};

char companies :: ceo[20]="Vinisha Lathiya";

int main()
{
    companies c1();
    return 0;
}
