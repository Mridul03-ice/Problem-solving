#include <iostream>

using namespace std;

class Bird
{
private:
    string name;
public:

    void setter_name(string i)
    {
        name=i;
    }
    string getter_name()
    {
        return name;
    }
    string show()
    {
        return name;
    }
};
class Parrot:public Bird
{
private:
    string col;
public:
    Parrot(string c)
    {
        col=c;
    }

    void setter_col(string j)
    {
        col=j;
    }
    string getter_col()
    {
        return col;
    }
    string show2()
    {
        return col;
    }

};

int main()
{
    Parrot bi("a");
    bi.setter_col("Black");
    bi.setter_name("Moina");
    cout<<"Bird Name : "<<bi.show()<<endl;
    cout<<"Color : "<<bi.show2()<<endl;
}
