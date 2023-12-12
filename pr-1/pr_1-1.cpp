#include<iostream>
using namespace std;

int main()
{
    int feet=0,inch=0,f1,f2,i1,i2;
    
    cout << "input1 =>" << "feet:";
    cin >> f1;
    cout << "inch:";
    cin >> i1;
    cout << endl << "input2=>" << "feet:";
    cin >> f2;
    cout << "inch:";
    cin >> i2;
    
    // feet=f1+f2+((i1+i2)/12);
    // inch=(i1+i2)%12;
    
    feet=f1+f2;
    inch=i1+i2;
    
    while(inch>=12)
    {
        feet++;
        inch-=12;
    }
    
    cout << endl << feet << " feet " << inch << " inch";
    
    return 0;
}