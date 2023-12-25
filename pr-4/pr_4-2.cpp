#include<iostream>
using namespace std;

class a
{ 
    public:

    int x,y;

    void  set(int n1,int n2)
    {
        this->x=n1;
        this->y=n2;
        // km=km1+km2;
        // m=m1+m2;
    }

    void get()
    {
        while(y>=1000)
        {
            x++;
            y-=1000;
        }
        cout << "km:" << x << "\tmeter:" << y;
    }

    a operator+(a n)
    {
        a temp;

        temp.x= this->x + n.x;
        temp.y= this->y + n.y;

        return temp;
    }

};

int main()
{
    int km1,km2,m1,m2,m=0,km=0;
    a b,c,d;

    cout << "input1 =>" << "km:";
        cin >> km1;
        cout << "meter:";
        cin >> m1;
        cout << endl << "input2=>" << "km:";
        cin >> km2;
        cout << "meter:";
        cin >> m2;

    b.set(km1,m1);
    c.set(km2,m2);

    d=b+c;    

    d.get();
    return 0;
}