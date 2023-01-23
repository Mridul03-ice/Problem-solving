#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    float hei,wi;
    float perimeter()
    {
        float res1=2*(hei+wi);
        return res1;
    }
    float area()
    {
        float res2=hei*wi;
        return res2;
    }
};

int main()
{
    Rectangle rect;
    rect.hei=10;
    rect.wi=5;
    float temp=rect.perimeter();
    cout<<temp<<endl;
    float temp1=rect.area();
    cout<<temp1<<endl;
}
