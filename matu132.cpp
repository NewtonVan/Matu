#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int maxl= 1e3+7;

int main()
{
	char str1[maxl], str2[maxl];
	int len, i;
	scanf("%s", str1);
	len= strlen(str1);
	for (i= 0; i< len; ++i){
		str2[i]= str1[i];
	}
	str2[i++]='\\';
	str2[i++]='0';
	str2[i++]='\0';
	printf("%s", str2);

	return 0;
}
