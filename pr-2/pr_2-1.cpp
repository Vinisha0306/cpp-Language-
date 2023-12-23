#include<iostream>
using namespace std;

class Train
{
    protected:

    int n,time,number;
    char name[20],source[20],des[20];

    public:

    void setdata()
    {
        cout << "Enter train number:";
        cin >> n;
        cout << "Enter train name:";
        fflush(stdin);
        cin >> name;
        cout << "Enter train source:";
        cin >> source;
        cout << " Enter train Destination:";
        cin >> des;
        cout << "Enter train time:";
        cin >> time;
    }

    void getdata()
    {
        cout << "number\tname\tsource\tdestination\ttime\t" << endl;
        cout << n << "\t" << name << "\t" << source << "\t" << des << "\t" << time << endl << endl;

        cout << "---------Train list--------" << endl;
        cout << "4077\tabc\tsurat to ahmedabad\t12:00" << endl;
        cout << "4078\tefg\tsurat to kach\t5:00" << endl;
        cout << "4079\tugt\tsurat to dwarka\t6:00" << endl;

    }

    void input()
    {
        cout << "Enter train number:";
        cin >> number;

        if(number==4077)
        {
            cout << endl << endl <<"4077\tabc\tsurat to ahmedabad\t12:00" << endl;
        }
        else if(number==4078)
        {
            cout << endl << "4078\tefg\tsurat to kach\t5:00" << endl;
        }
        else if(number==4079)
        {
            cout << endl << "4079\tugt\tsurat to dwarka\t6:00" << endl;
        }
    }
};

int main()
{
    Train t1[3],t2;

    for(int i=0;i<3;i++)
    {
        t1[3].setdata();
        t1[3].getdata();
    }
    t2.input();

    return 0;
}