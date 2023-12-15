#include<iostream>
#include<string.h>
using namespace std;

class hotel_data
{
    int id,rating,year,staff,room;
    static char name[20];
    char type[20],city[20];
    
    public:

    void set_hotel_data()
    {
        cout << endl << "Enter hotel id:";
        cin >> this->id;
        cout << "Enter hotel type like-hotel & motel:";
        fflush(stdin);
        gets(this->type);
        cout << "Enter rating like 1-star to 7-star:";
        cin >> this->rating;
        cout << "Enter hotel location:";
        fflush(stdin);
        gets(this->city);
        cout << "Enter established year:";
        cin >> this->year;
        cout << "Enter staff quantity:";
        cin >> this->staff;
        cout << "Enter room quantity:";
        cin >> this->room;
    }
    void get_hotel_data()
    {
        cout << endl << "Hotel ID :" << this->id << endl;
        cout << "Hotel Name :" <<  this->name << endl;
        cout << "Hotel Rating :" << this->rating << endl;
        cout << "Hotel location:" << this->city << endl;
        cout << "Hotal Established Year:" << this->year << endl;
        cout << "Hotel Staff Quantity:" << this->staff << endl;
        cout << "Hotel Room Quantity:" << this->room << endl;
    }
};

char hotel_data::name[20]="L.V. hotel";

int main()
{
    int n;
    
    cout << "Enter hotel numbers:";
    cin >> n;
    
    hotel_data h[n];
    
    for(int i=0;i<n;i++)
    {
        h[i].set_hotel_data();
    }
    
    for(int i=0;i<n;i++)
    {
        h[i].get_hotel_data();
    }
    
    return 0;
}
