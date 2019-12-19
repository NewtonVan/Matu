#include "CDate.h"

Date::Date(int y, int m, int d)
{
	year= y;
	if (m<1 || m>12){
		month= 1;
		cout<<"Invalid month!"<<endl;
	}
	else{
		month= m;
	}
	if (d< 1 || d> days(year, month)){
		day= 1;
		cout<<"Invalid day!"<<endl;
	}
	else{
		day= d;
	}
}
int Date::days(int year, int month)
{
	int dys;
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			dys= 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			dys= 30;
			break;
		default:
			if (0== year%400 || (year%100 && 0== year%4)){
				dys= 29;
			}
			else{
				dys= 28;
			}
			break;
	}
	return dys;
}
void Date::NewDay()
{
	if (days(year, month)== day){
		if (12== month){
			++year;
			month= 1;
		}
		else{
			++month;
		}
		day= 1;
	}
	else{
		++day;
	}
}
