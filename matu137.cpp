#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

class Ctriangle{
	double a, b, c;
public:
	Ctriangle(double aa, double bb, double cc) : a(aa), b(bb), c(cc){}
	Ctriangle(){}
	void display();
	double GetArea();
	double GetPerimeter();
};

void Ctriangle::display()
{
	printf("Ctriangle:a=%.0f,b=%.0f,c=%.0f\n", a, b, c);
}
double Ctriangle::GetPerimeter()
{
	return a+b+c;
}
double Ctriangle::GetArea()
{
	double p= (a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	Ctriangle T(a,b,c);
	T.display();
	cout<<"Perimeter:"<<T.GetPerimeter()<<endl;
	cout<<"Area:"<<T.GetArea()<<endl;
	return 0;	 
}
