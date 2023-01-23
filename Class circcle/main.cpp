#include <iostream>

using namespace std;
class Circle
{
public:
    float rad;
    float perimeter()
    {
        float res1=2*3.1416*rad;
        return res1;
    }
    float area()
    {
        float res2=3.1416*rad*rad;
        return res2;
    }

};

int main()
{
    Circle cir;
    cir.rad=15;
    float temp=cir.perimeter();
    cout<<temp<<endl;
    float temp2=cir.area();
    cout<<temp2<<endl;
}
