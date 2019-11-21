#include <iostream>
#include <cstdio>
using std::cin;
using std::cout;
using std::endl;


int main()
{
	int width= 0;
	cin>>width;
	if (0==width%2 || width< 1 || width >80){
		cout<<"error"<<endl;
	}
	else{
		for (int i= 0; 2*i< width; ++i){
			for (int j= 0; j< i; ++j){
				cout<<' ';
			}
			for (int j= 0; j< width-2*i; ++j){
				cout<<'*';
			}

			cout<<endl;
		}
	}

	return 0;
}
