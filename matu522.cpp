template<typename T>
T get_sum(T *arr, int n)
{
	T ans= arr[0];
	for (int i= 1; i< n; ++i){
		ans+= arr[i];
	}

	return ans;
}
