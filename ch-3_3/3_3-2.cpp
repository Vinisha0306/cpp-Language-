#include<iostream>
#include<string.h>
using namespace std;

class cafe_data
{
    int id,rating,year,staff;
    char name[20],type[20],city[20];
    
    public:
    
    cafe_data()
    {
        cafe_set();
        cafe_get();
        
    }
    void  cafe_set()
    {
        cout << endl << "Enter cafe id:";
        cin >> this->id;
        cout << "Enter cafe name:";
        fflush(stdin);
        cin >> this->name;
        cout << "Enter cafe type(like a rooftop and normal):";
        cin >> this->type;
        cout << "Enter cafe rating(like 1-star to 5-star):";
        cin >> this->rating;
        cout << "Enter cafe location:";
        fflush(stdin);
        cin >> this->city;
        cout << "Enter cafe established year:";
        cin >> this->year;
        cout << "Enter staff quantity:";
        cin >> this->staff;
        cout << endl << endl ;
    }
    void cafe_get()
    {
        cout << "id\tname\ttype\trating\tcity\tyear\tstaff" << endl;
        cout << this->id << "\t" << this->name << "\t"<< this->type << "\t"<< this->rating << "\t"<< this->city << "\t"<< this->year << "\t"<< this->staff << endl;
    }
};

int main()
{
    int n;
    
    cout << "Enter cafe number:";
    cin >> n;
    
    for(int i=0;i<n;i++)
    {
        cafe_data c1;
    }

    return 0;
}