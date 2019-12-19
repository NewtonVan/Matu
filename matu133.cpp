#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
void Matrix_Mul(int a[3][2], int b[2][4])
{
	for (int i= 0; i< 3; ++i){
		for (int j= 0; j< 4; ++j){
			int tmp= 0;
			for (int k= 0; k< 2; ++k){
				tmp+= a[i][k]*b[k][j];
			}
			printf("%d ", tmp);
		}
		putchar('\n');
	}
}
