#include<iostream>
using namespace std;

class RBI
{
    protected :
    
    int putv,getv,ROI=40;
    
    public :
    
    void input()
    {
        cout << "Enter your investment:";
        cin >> putv;
    }
    
};

class SBI : public RBI
{
    public:
    
    void getRoi()
    {
        getv=((float)ROI/100)*putv;
        cout << "Profit =" << getv;
        cout << "Total =" << getv+putv;
    }
};

class BOB : public RBI
{
    public:
    
    void getRoi()
    {
        getv=((float)ROI/100)*putv;
        cout << "Profit =" << getv;
        cout << "Total =" << getv+putv;
    }
};

class ICICI : public RBI
{
    public:
    
    void getRoi()
    {
        getv=((float)ROI/100)*putv;
        cout << "Profit =" << getv;
        cout << "Total =" << getv+putv;
    }
};
int main()
{
    SBI s1;
    BOB b1;
    ICICI i1;
    int str;
    
    cout << "Enter your bank name(like 1,2 and 3):" << endl << "\t1) SBI" << endl << "\t2) BOB" << endl << "\t3) ICICI";
    cin >> str;
    
    if(str==1)
    {
        s1.input();
        s1.getRoi();
    }    
    else if(str==2)
    {
        b1.input();
        b1.getRoi();
    }
    else if(str==3)
    {
        i1.input();
        i1.getRoi();
    }
    else
    {
        cout << "invalid input";
    }
    
    return 0;
}