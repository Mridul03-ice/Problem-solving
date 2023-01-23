#include <iostream>

using namespace std;
class Cube
{
public:
    float hei;
    float perimeter()
    {
        float res1=12*hei;
        return res1;
    }
    float volume()
    {
        float res2=hei*hei*hei;
        return res2;
    }
    float area()
    {
        float res3=6*(hei*hei);
        return res3;
    }

};

int main()
{
    Cube cu;
    cu.hei=15;
    float temp=cu.perimeter();
    cout<<temp<<endl;
    float temp1=cu.volume();
    cout<<temp1<<endl;
    float temp2=cu.area();
    cout<<temp2<<endl;
}
