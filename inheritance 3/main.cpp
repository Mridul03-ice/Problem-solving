#include <iostream>

using namespace std;
class Square
{
private:
    int hei;
public:
    void setter_hei(int i)
    {
        hei=i;
    }
    int getter_hei()
    {
        return hei;
    }
    int perimeter()
    {
        return  4*hei;
    }
    int area()
    {
        return hei*hei;
    }
};


int main()
{
    Square sq;
    sq.setter_hei(5);
    cout<<sq.perimeter()<<endl;
    cout<<sq.area()<<endl;

}
