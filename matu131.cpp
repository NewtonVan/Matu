#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

const int maxn= 10+3;

int od[maxn]= {0}, evn[maxn]= {0};
int main()
{
	int no= 0, ne= 0, in, n= 10;
	while (n-- && EOF!= scanf("%d", &in) && -1< in){
		if (0== (in & 1)){
			evn[ne++]= in;
		}
		else{
			od[no++]= in;
		}
	}
	sort(evn, evn+ne);
	sort(od, od+no);
	for (int i= 0; i< no; ++i){
		printf("%d ", od[i]);
	}
	for (int i= 0; i< ne; ++i){
		printf("%d ", evn[i]);
	}
	return 0;
}
