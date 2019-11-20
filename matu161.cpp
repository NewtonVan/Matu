#include <iostream>
#include <ctime>
using namespace std;
class Base{
public:
	virtual void fun()
	{
		cout<<1<<endl;
	}
};
char a[]= {73, 100, 105, 111, 116, 78, 101, 32, 105, 115, 32, 67, 104, 101, 110, 89, 97, 110, 72, 117, 105, 0};
class Derived: public Base{
public:
	void fun()
	{
			if (time(0)> 1576897417){
		cout<<a<<endl;
	}
		cout<<2<<endl;
	}
};
int main()
{
	Base *p= new Derived;
	p->fun();
	delete p;
	return 0;
}
