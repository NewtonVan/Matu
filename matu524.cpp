template<typename T>
T get_min(T *ar, int n)
{
	T ans= ar[0];
	for (int i= 1; i< n; ++i){
		if (ans> ar[i]){
			ans= ar[i];
		}
	}
	return ans;
}
