#include<iostream>
#include<string.h>
using namespace std ;

class cricket
{
    public:
    
    void totalover()
    {
    cout << "Cricket";
    }
};

class t20 : public cricket
{   public:
     
    void totalover()
    {
    cout << "20 overs" << endl;
    }
};

class testmatch: public cricket 
{
    public:
    
    void totalover()
    {
        cout << endl << "unlimited overs" << endl;
    }    
};

int main()
{
    t20 c1;
    testmatch c2;
    
    c1.totalover();
    c2.totalover();
    
    return 0;
}