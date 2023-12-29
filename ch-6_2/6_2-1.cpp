#include<iostream>
using namespace std;

class A
{
    protected:
    int h,w;
    
};

class rectangle1 : public A
{
    int h,w;
    
    void rectangle(int h,int w) 
    {
        this->h=h;
        this->w=w;
    }   
    public:
    
    void arear()
    {
        cout << "Enter rectangle width:" ;
        cin >> w;
        cout << "Enter rectangle hight:";
        cin >> h;
        
        rectangle(h,w);
    }
    
    void calc()
    {
      cout << "Enter of rectangle : " << w*h << endl;
    }
};

class triangle1 : public A
{
    double h,b;
    
    public:
    
    void areat()
    {
        cout << "Enter triangle base:" ;
        cin >> b;
        cout << "Enter triangle hight:";
        cin >> h;
        int v=((double)1/(double)2)*b*h;
        cout << "Enter of triangle:" << v << endl;
    }
};
class circle1 : public A
{
    int redius;
    double pi=3.14;
    
    void circle(int r)
    {
        redius=r;
    }
    
    public:
    
    void areac()
    {
        cout << "Enter redius of circle:" ;
        cin >> redius;
        cout << "area of circle:" << pi*redius*redius << endl;
        
        circle(redius);
    }
    
    void calc()
    {
        
    }
};

int main()
{
    rectangle1 o1;
    triangle1 o2;
    circle1 o3;
    
    o1.arear();
    o1.calc();
    o2.areat();
    o3.areac();
    o3.calc();
    
    return 0;
}