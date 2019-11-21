#include <iostream>
using namespace std;
class Set{
	int n;
	int *pS;
public:
	Set() : n(0), pS(NULL){}
	Set(Set &s)
	{
		n= s.n;
		if(0!= n){
			pS= new int[n+1];
			for (int i= 1; i<= n; ++i){
				pS[i]= s.pS[i];
			}
		}
	}
	~Set()
	{
		if (pS){
			delete []pS;
			pS= NULL;
			n= 0;
		}
	}
	void ShowElement() const 
	{
		int temp= 0;
		for (int i= 1; i< n; ++i){
			for (int j= i+1; j< n; ++j){
				if (pS[i]> pS[j]){
					temp= pS[i];
					pS[i]= pS[j];
					pS[j]= temp;
				}
			}
		}
		cout<<"{";
		for (int i= 1; i< n; ++i){
			cout<<pS[i]<<",";
		}
		if (IsEmpty()){
			cout<<"}"<<endl;
		}
		else{
			cout<<pS[n]<<"}"<<endl;
		}
	}
	bool IsEmpty() const 
	{
		return n? false : true;
	}
	int size()
	{
		return n;
	}
	bool IsElement(int e) const 
	{
		for (int i= 1; i<= n; ++i){
			if (pS[i]==e){
				return true;
			}
		}
		return false;
	}
	bool operator <=(const Set &s) const;
	bool operator ==(const Set &s) const;
	Set & operator +=(int e);
	Set & operator -=(int e);

	Set operator | (const Set &s) const;
	Set operator & (const Set &s) const;
	Set operator - (const Set &s) const;
};
