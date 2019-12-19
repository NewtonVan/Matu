#include <cstdio>
#include <iostream>
using std::cout;
int main()
{
	int i, j;

	for (i= 0; i<10 ;++i){
		j= i*10+6;
		if (j%3){
			continue;
		}
		cout<<j;
	}

	return 0;
}
