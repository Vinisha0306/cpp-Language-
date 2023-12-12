#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:

    int id,age;
    char name[20],course[20],city[20],email[30],college[30];

    public:

    void setdata()
    {
        cout << "Enter student ID:";
        cin >> id;
        cout << "Enter student Name:";
        fflush(stdin);
        gets(name);
        cout << "Enter student Age:";
        cin >> age;
        cout << "Enter student Course:";
        fflush(stdin);
        gets(course);
        cout << "Enter student City:";
        gets(city);
        cout << "Enter student Email:";
        gets(email);
        cout << "Enter student College:";
        gets(college);
        cout << endl;

        getdata();

    }

    void getdata()
    {
        cout << "ID\t:" << id << endl
             << "Name\t:" << name << endl
             << "Age\t:" << age << endl
             << "Course\t:" << course << endl
             << "City\t:" << city << endl
             << "Email\t:" << email << endl
             << "College\t:" << college << endl;
    }
};

int main()
{
    Student s1,s2,s3,s4,s5;

    s1.setdata();
    s2.setdata();
    s3.setdata();
    s4.setdata();
    s5.setdata();

    s1.getdata();
    s2.getdata();
    s3.getdata();
    s4.getdata();
    s5.getdata();

    return 0;
}
