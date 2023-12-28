#include<iostream>
using namespace std;

int main()
{
    int a,b;
    string e="error";

    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;

    try
        {
            if(b==0 || a==0)
            {
                throw e;
            }
            else
            {
                throw false;
            }
        }
            catch(string e)
            {
                cout << e ;
            }
            catch(int e)
            {
                cout << "a:" << a << "\t" << "b:" << b;
            }
            catch(double e)
            {
                cout << "This value is double";
            }
            catch(...)
            {
                cout << "General Exception" ;
            }
    
    return 0;
}