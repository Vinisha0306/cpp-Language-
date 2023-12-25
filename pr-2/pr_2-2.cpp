#include<iostream>
#include<string.h>
using namespace std ;

class supermarket
{
    int number,quantity,discount,a=0,b=0,c=a,d=b,n;
    double price;
    char name[20],idv[20],pass[10];
    
    public:
    
    void set_data()
    {
        
        cout << "Enter item number:";
        cin >> this->number;
        cout << "Entet item name:";
        cin >> this->name;
        cout << "Enter item price:";
        cin >> this->price;
        cout << "Enter quantity:";
        cin >> this->quantity;
        cout << "Enter discount:";
        cin >> this->discount;
        cout << endl;
        
    }
    
    void verify()
    {
        cout <<"Enter your id:";
        cin >> this->idv;
        cout << "Enter your password:";
        cin >> this->pass;
    }
    
    void output(char id[20],char password[10])
    {
        
        verify();
        
        for(int i=0;id[i]!=NULL;i++)
        {
            if(id[i]==this->idv[i])
                a++;
        }
        for(int i=0;password[i]!=NULL;i++)
        {
            if(password[i]==this->pass[i])
                b++;
        }
        
        if(a==11 && b==6)
        {
          
            cout << "|\tnumber\t|\tname\t|\tprice\t|\tquantity\t|\tdiscount\t| ";
        } 
        else
        {
            cout << "enter" << endl;
        }   
        
            if(a==11 && b==6)
        {
          
            cout << "|\t" << this->number << "\t|\t" << this->name << "\t|\t"  << this->price << "\t|\t"  << this->quantity << "\t|\t"  << this->discount << "\t| " << endl ;
        } 
        else
        {
            cout << "enter" << endl;
        }   
        
    }

    void user_input()
    {
        cout << "Enter item number:";
        cin >> n;

        if(n==number)
        {
            cout << "|\t" << this->number << "\t|\t" << this->name << "\t|\t"  << this->price << "\t|\t"  << this->quantity << "\t|\t"  << this->discount << "\t| " << endl << endl;
        }
    }
};

int main()
{
    char id[20]="vinisha0306",password[10]="123456";
    int n;
    
    supermarket s1;
    
    
        s1.set_data();
        s1.output(id,password);
        s1.user_input();
    
    return 0;
}