#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Ice
{
private:
    int Batch;
    string Name;
public:
    void setter_n1(string a)
    {
        Name=a;
    }
    string getter_n1()
    {
        return Name;
    }
    void setter_b1(int i)
    {
        Batch=i;
    }
    int getter_b1()
    {
        return Batch;
    }
    string name()
    {
        return Name;
    }
    int batch()
    {
        return Batch;
    }
};

class Student:public Ice
{
private:
int Semester;
public:
    void setter_sem(int b)
    {
        Semester=b;
    }
    int getter_sem()
    {
        return Semester;
    }
    int semester()
    {
        return Semester;
    }
};

int main()
{
    Ice ice;
    ice.setter_n1("Mojib");
    ice.setter_b1(71);
    cout<<"Name : "<<ice.name()<<endl;
    cout<<"Batch : "<<ice.batch()<<endl;
    Student stu;
    stu.setter_sem(4);
    cout<<"Semester : "<<stu.semester()<<"th"<<endl;
    return 0;
}
