#include<iostream>
using namespace std;

class divide
{
    private:
    int a,b;
    string e="error";
    public:

    divide()
    {
        cout << "Enter A:";
        cin >> a;
        cout << "Enter B:";
        cin >> b;

        try
        {
            if(b==0 || a==0)
            {
                throw e;
            }
            else
            {
                throw (double)a/b;
             }
        }
            catch(string e)
            {
                cout << e ;
            }
            catch(int e)
            {
                cout << "a divide by b :" << e;
            }
            catch(double e)
            {
                cout << "a divide by b :" << e;
            }
            catch(...)
            {
                cout << "General Exception" ;
            }
    }
};

class vote
{
    int age;
    string a="he/she cannot be able to vote!";
    public:

    vote()
    {
        cout << "Enter your age:";
        cin >> age;

        try
        {
            if(age<18)
            {
                throw a;
            }
            else
            {
                cout << "he/she can be able to vote!";
            }
        }
        catch(string a)
        {
            cout << a;
        }
        }
};

int main()
{
    divide d1;
    vote v1;
    
    return 0;
}
