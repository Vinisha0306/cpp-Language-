#include<iostream>
using namespace std;

int main()
{
    int fy,ly,size=0;

    cout << "Enter first year:";
    cin >> fy;
    cout << "Enter last year:";
    cin >> ly;

    int a[ly-fy];

    for(int i=fy;i<=ly;i++)
    {
        if(i%4==0)
        {
            a[size]=i;
            size++;
        }
    }

    for(int i=0;i<size;i++)
    {
        cout << a[i] << endl ;
    }

    return 0;
}