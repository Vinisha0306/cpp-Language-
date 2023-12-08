#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char name[50];

    cout << "Enter any word:";
    gets(name);

    for(int i=0; name[i]!='\0' ; i++)
    {
        if(name[i]>='A' && name[i]<='Z')
        {
                name[i]+=32;
        }
        else
        {
            name[i]-=32;
        }
    }
    
    cout << name ;

    return 0;
}