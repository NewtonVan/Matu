#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int maxn= 1e3+5;

char a[maxn], b[maxn], ans[maxn];

int main()
{
	int bw= 0, equal= 1;
	scanf("%s %s", a, b);
	int la= strlen(a), lb= strlen(b);
	int ha= la>>1, hb= lb>>1, maxl= max(la, lb);

	for (int i= 0; i< ha; ++i){
		char tmp= a[i];
		a[i]= a[la-1-i];
		a[la-1-i]= tmp;
	}
	for (int i= 0; i< hb; ++i){
		char tmp= b[i];
		b[i]= b[lb-1-i];
		b[lb-1-i]= tmp;
	}
	if (la> lb){
		for (int i= lb; i< la; ++i){
			b[i]= '0';
		}
		b[la]= '\0';
	}
	else if (lb> la){
		for (int i= la; i< lb; ++i){
			a[i]= '0';
		}
		a[lb]= '\0';
	}

	for (int i= 0; i< maxl; ++i){
		int tmp= a[i]-b[i]-bw;
		if (tmp< 0){
			bw= 1;
			ans[i]= '0'+10+tmp;
			equal= 0;
		}
		else{
			bw= 0;
			ans[i]= '0'+tmp;
			if (tmp){
				equal= 0;
			}
		}
	}
	if (equal){
		putchar('0');
	}
	else{
		if (bw){
			putchar('-');
			ans[maxl-1]= 2*'0'+(10-ans[maxl-1]);
		}
		else{
			putchar('+');
		}
		for (int i= 0; i< maxl; ++i){
			putchar(ans[maxl-1-i]);
		}
	}

	return 0;
}
