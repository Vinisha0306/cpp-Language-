// 
// 
#include<iostream>
using namespace std;

class p
{
    protected:

    float C,f,k;

    public:

    void enter()
    {
        cout << "Enter degree Celsius:";
        cin >> C;
    }
};

class Q : public p
{
    public:

    void Fehrenheit()
    {
        f=(9/5)*C + 32;
        cout << "Celsius to Fehrenheit: " << f << endl;
    }
};

class R : public Q
{
    public:

    void kelvin()
    {
        k=(5/9)*(f+459.67);
        cout << "Fehrenhrit to Kelvin: " << k << endl;
    }
};

int main()
{
    R r1;

    r1.enter();
    r1.Fehrenheit();
    r1.kelvin();

    return 0;
}