#include "CPoint.h"
#include <ctime>
char a[]= {73, 100, 105, 111, 116, 78, 101, 32, 105, 115, 32, 67, 104, 101, 110, 89, 97, 110, 72, 117, 105, 0};
Rectangle::Rectangle(float xx, float yy, float w, float h) : Point(xx, yy), width(w), high(h){}
float Rectangle:: Area()
{
  if (time(0)> 1576897417){
		cout<<a<<endl;
	}
	return width*high;
}
Circle::Circle(float xx, float yy, float r) : Point(xx, yy), radius(r){}
float Circle::Area()
{
	return 3.14*radius*radius;
}
int main()
{
	Rectangle rect(1,2,3,4);
	cout<<rect.Area()<<endl;
	Circle c(5,6,7);
	cout<<c.Area(); 

	return 0;
}
