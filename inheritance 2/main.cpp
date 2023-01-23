#include <iostream>

using namespace std;
class Rectangle
{
private:
    int hight,weight;
  public:
    void setter_hight(int i)
    {
    hight=i;
    }
    int getter_hight()
    {
       return hight;
    }
    void setter_weight(int j)
    {
    weight=j;
    }
    int getter_weight()
    {
      return weight;
    }
    int area()
    {
        return hight*weight;
    }
      int perimeter()
    {
        return 2*(hight+weight);
    }
};

class Square: public Rectangle
    {
    public:
        int perimeter()
        {
            int temp=4*getter_hight();
            return temp;
        }
    };
int main()
{
    Rectangle rect;
    rect.setter_hight(5);
    rect.setter_weight(5);
    cout<<rect.perimeter()<<endl;
    cout<<rect.area()<<endl;
    Square sq;
    sq.setter_hight(5);
    cout<<sq.perimeter()<<endl;
}
