#include<iostream>
using namespace std;

int main()
{
    int sec,hour,min,second;
    
    cout << "Enter any second:" ;
    cin >> sec; 
    
    hour=sec/3600;
    min=(sec % 3600)/60;
    second=sec-(hour*3600+(min*60));
    
    cout << hour << ":" << min << ":" << second;
    
    return 0;
}