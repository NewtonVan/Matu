/*emm, I've been trapped, I'm not happy but I have to admit that I have weak point about this knowledge*/
#include <iostream>
#include <cstdlib>
using namespace std;

int bound;

int fact(int n)
{
	if (n< 0){
		return -2;
	}
	else if (0==n || 1== n){
		return 1;
	}
	else{
		int tmp= fact(n-1);
		if (-1== tmp){
			return -1;
		}
		int check= n*tmp;
		if (n!= check/tmp){
			bound= n-1;
			return -1;
		}
		else{
			return check;
		}
	}
}

int main()
{
	int n;
	cin>>n;

	int ans= fact(n);
	if (-1== ans){
		cout<<bound<<"!="<<fact(bound);
	}
	else if (-2== ans){
		cout<<"ERROR";
	}
	else{
		cout<<n<<"!="<<ans;
	}
	return 0;
}
