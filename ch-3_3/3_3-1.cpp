#include<iostream>
#include<string.h>
using namespace std;

class companies
{
    int Id,staff,year,raw_year,export_year;
    char name[20];
    static char ceo[20];
    
    public:

    companies(int Id,char name[],int staff,int year,int raw_year,int export_year)
    { 
        this->Id = Id;
        strcpy(this->name,name);
        this->staff =staff;
        this->year = year;
        this->raw_year = raw_year;
        this->export_year = export_year;

        cout << "Id" << "\t" << "name" << "\t\t" << "staff"<< "\t" << "year" << "\t" << "raw_year" << "\t" << "export_year" << "\t" << "ceo" << endl;
        cout << Id << "\t" << name << "\t" << staff << "\t" << year << "\t" <<raw_year << "\t\t" << export_year << "\t\t" << ceo << endl << endl;
    }
};

char companies :: ceo[20]="Vinisha Lathiya";

int main()
{
    int n;
    int Id,staff,year,raw_year,export_year;
    char name[20];
    
    cout << "Enter companie number:";
    cin >> n;
    cout << endl;

    for(int i=0;i<n;i++)
    {
        cout << "Enter companie ID:";
        cin >> Id;
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
        cout << endl;

        companies c1(Id,name,staff,year,raw_year,export_year);
    }
    return 0;
}
