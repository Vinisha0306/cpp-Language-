#include<iostream>
using namespace std;

int main()
{
    int age;
    string a="you are not eligible to vote!";

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
                cout << "you are eligible to vote";
            }
        }
        catch(string a)
        {
            cout << a;
        }
}