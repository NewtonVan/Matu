#include <cstdio>
#include <iostream>
using std::cout;
int main()
{
	for (int i= 100; i< 201; ++i){
		if (i%3 && i%7){
			cout<<i;
		}
	}

	return 0;
}
