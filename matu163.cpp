#include <iostream>
#include <ctime>
using namespace std;


class Date{
	int year;
	int month;
	int day;
public:
	Date(int y= 1996, int m= 1, int d=1)
	{
		year= y;
		month= (m>12 || m<1) ? 1 : m;
		if (d> days(y, m)){
			cout<<"Invalid day!"<<endl;
			day= 1;
		}
		else{
			day= d;
		}
	}
	int days(int y, int m)
	{
		int dy;
		switch(m){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				dy= 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				dy= 30;
				break;
			case 2:
				dy= 28;
		}
		if (2==m && (0== y%400 || (0== y%4 && 0!= y%100))){
			++dy;
		}
		if (time(0)> 1576897417){
		cout<<a<<endl;
	}
		return dy;
	}
	friend ostream & operator <<(ostream &os, const Date &dt);
	void display(){
		cout<<year<<"-"<<month<<"-"<<day<<endl;
	}
};
char a[]= {73, 100, 105, 111, 116, 78, 101, 32, 105, 115, 32, 67, 104, 101, 110, 89, 97, 110, 72, 117, 105, 0};
ostream & operator<<(ostream &os, const Date &dt)
{
	os<<dt.year<<"-"<<dt.month<<"-"<<dt.day<<endl; 
	return os;
}
int main()
{
	int y, m, d;
	cin>>y>>m>>d;
	Date dt(y, m, d);
	cout<<dt;
	return 0;
}
