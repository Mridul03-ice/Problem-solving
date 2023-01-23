#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Shape
{
private:
    int hei;
public:
    int perimeter()
    {
        return hei;
    }
    void setter_hei(int i)
    {
        hei=i;
    }
    int getter_hei()
    {
        return hei;
    }
};

class Rectangle: public Shape
{
private:
    int wei;
public:
    int perimeter()
    {
        int temp=2*(wei+getter_hei());
        return temp;
    }
    void setter_wei(int j)
    {
        wei=j;
    }
    int getter_wei()
    {
        return wei;
    }
};

int main()
{
    Shape sh;
    sh.setter_hei(5);
    cout<<sh.perimeter()<<endl;
    Rectangle rec;
    rec.setter_hei(5);
    rec.setter_wei(10);
    cout<<rec.perimeter()<<endl;
}
