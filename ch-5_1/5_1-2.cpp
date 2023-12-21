#include<iostream>
using namespace std;

class Cricket
{
    public:
    void getTotalOvers()
    {
        cout << "Total over: 10" ;
    }
};

class T20Match : public Cricket
{
    public:

    void getTotalOvers()
    {
        cout << "Total over: 6" ;
    }
};

int main()
{
    T20Match o1;

    o1.getTotalOvers();

    return 0;
}