#include<iostream>
using namespace std;

class Result
{
    public:

    int sub;

    void setter()
    {
        cout << "Enter Sci mark:";
        cin >> sub;
    }

    Result operator-(int n)
    {
        Result temp;

        temp.sub=sub-n;
        return temp;
    }
    Result operator+(int n)
    {
        Result temp;

        temp.sub=sub+n;
        return temp;
    }

    void grade(double per)
    {
        if(per>=90)
        {
            cout << endl << "Grade A1";
        }
        else if(per>=80)
        {
            cout << endl << "Grade A2";
        }
        else if(per>=70)
        {
            cout << endl << "Grade B1";
        }
        else if(per>=60)
        {
            cout << endl << "Grade B2";
        }
        else if(per>=50)
        {
            cout << endl << "Grade C1";
        }
        else if(per>=40)
        {
            cout << endl << "Grade C2";
        }
        else
        {
            cout << endl << "Better Luck Next Time";
        }
    }
};

int main()
{
    Result math,sci,eng,guj,ss,com;

    sci.setter();
    cout << endl << "Sci:"  << sci.sub << endl;

    math=sci-3;
    cout << "Math:"  << math.sub << endl;

    eng=math+2;
    cout << "Eng:" << eng.sub << endl ;

    guj=eng+2;
    cout << "Guj:" << guj.sub << endl;

    ss=guj-3;
    cout << "S.s:" << ss.sub << endl;

    com=ss+4;
    cout << "Com:" << com.sub << endl;

    int total= sci.sub+math.sub+eng.sub+guj.sub+ss.sub+com.sub;

    cout << endl << "Total:" << total << endl;

    double per=((double)total*100)/600;
    cout << endl << "Per:" << per << endl;

    math.grade(per);
    return 0;
}