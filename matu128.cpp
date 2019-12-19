#include <cstdio>
#include <iostream>
using namespace std;

const double eps= 1e-8;

int main()
{
	int steps= 0, sign= 1;
	double pi=0.0, term;
	while (1){
		term= 1.0/(2*steps+1);
		++steps;
		pi+= term*sign;
		if (eps> term){
			break;
		}
		sign*= -1;
	}

	printf("steps=%d PI=%.5f", steps, pi*4);
	return 0;
}
