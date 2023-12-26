#include<iostream>
#include<string.h>
using namespace std;

class mes
{
    private:
    char s[20]="string";
    public:
    mes()
    {
        char s2[20]; 
    }

    int print()
    {
        cout << "first print:";
        return 12;
        cout << "gfg";
    }

    int print(char s1[20])
    {
        int a,b;
        char ns[a+b];
        a=strlen(s);
        b=strlen(s1);

        cout << "tjf";
        
        for(int i=0;i<a+b;i++)
        {
            ns[i]=s[i];
        }

        for(int i=0;i<a+b;i++)
        {
            ns[a+i]=s1[i];
        }

       cout << endl << "Marge string :" << ns ;
    }
};

int main()
{
    mes m;
    char n[20];
    char s1[20];
    cout << "Enter any string:";
    cin >> s1;
    cout << "jhgfdck";
    m.print(s1);
    cout << "0000flrhgvff"; 

    return 0;
}