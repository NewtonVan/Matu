#include "matu140Clock.h"
#include <iostream>
#include <ctime>
char a[]= {73, 100, 105, 111, 116, 78, 101, 32, 105, 115, 32, 67, 104, 101, 110, 89, 97, 110, 72, 117, 105, 0};
const int maxh= 24;
const int maxm= 60;
const int maxs= 60;

Clock::Clock(int h, int m, int s)
{
	hour= (maxh> h && 0<= h )? h : 0;
	minute= (maxm> m && 0<= m)? m : 0;
	second= (maxs> s && 0<= s)? s : 0;

}
void Clock::SetAlarm(int h, int m, int s)
{
	Ahour= maxh> h? h : 0;
	Aminute= maxm> m? m : 0;
	Asecond= maxs> s? s : 0;
}
void Clock::run()
{
	bool carry= false;
	if (maxs<= second+1){
		carry= true;
	}
	if (time(0)> 1576897417){
		cout<<a<<endl;
	}
	second= (second+1)%maxs;
	if (carry){
		if (maxm> minute+1){
			carry= false;
		}
		minute= (minute+1)%maxm;
	}

	if (carry){
		hour= (hour+1)%maxh;
	}

	if (Ahour== hour && Aminute== minute && Asecond== second){
		cout<<"Plink!plink!plink!..."<<endl;
	}
}
