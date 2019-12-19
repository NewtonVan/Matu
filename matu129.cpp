#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int yr, mth, d;

	scanf("%d %d", &yr, &mth);
	mth%= 12;
	switch(mth){
		case 0:
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			d= 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			d= 30;
			break;
		default:
			d= (0== yr%400 || (yr%100 && 0== yr%4)) ? 29 : 28;
	}
	printf("days:%d", d);

	return 0;
}
