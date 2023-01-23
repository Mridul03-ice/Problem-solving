#include <iostream>

using namespace std;
class Shape
{
public:
    int hei;
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

class Square: public Shape
    {
    public:
        int perimeter()
        {
            int temp=4*getter_hei();
            return temp;
        }
    };

int main()
{
    Shape sh;
    sh.setter_hei(5);
    cout<<sh.perimeter()<<endl;
    Square sq;
    sq.setter_hei(5);
    cout<<sq.perimeter()<<endl;
}
