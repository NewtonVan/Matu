#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

class Point
{
	double x, y;
public:
	Point();
	~Point();
	Point(double xx, double yy) : x(xx), y(yy) {}
	double Distance(const Point &B);
};

double Point::Distance(const Point &B)
{
	return sqrt((x-B.x)*(x-B.x)+(y-B.y)*(y-B.y));
}
Point::Point(){}
Point::~Point(){}

int main(){
    double a,b,c,d;
	cin>>a>>b>>c>>d;
	Point A(a,b),B(c,d);
	cout<<A.Distance(B)<<endl;
	return 0;
}
