#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int SubStrNum(char *str, char *substr)
{
	const int len= strlen(str), len1= strlen(substr);
	int ans= 0;
	int j= 0;
	for (int i= 0; i< len; ++i){
		if (str[i]== substr[j]){
			++j;
			if (len1== j){
				++ans;
				j= 0;
			}
		}
		else{
			j= 0;
			if (str[i]== substr[j]){
				++j;
			}
		}
	}
	printf("match times=%d", ans);

	return ans;
}
