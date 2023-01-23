// C++ program to demonstrate the working
// of a COPY CONSTRUCTOR
#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	// Copy constructor
	Point(const Point& p1)
	{
		x=p1.x;
		y=p1.y;
	}

	int getx()
	{
	    return x;
	}
	int gety()
	{
	    return y;
	}
};
int main()
{
	Point p1(10, 15); // Normal constructor is called here
	Point p2 = p1; // Copy constructor is called here

	cout<<"p1.x : "<<p1.getx()<<endl;
	cout<<"p2.x : "<<p2.getx()<<endl;
	cout<<"p1.y : "<<p1.gety()<<endl;
	cout<<"p2.y : "<<p2.gety()<<endl;


	return 0;
}
