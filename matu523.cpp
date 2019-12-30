template<typename T>
T get_max(T *arr, int n)
{
	T ans= arr[0];
	for (int i= 1; i< n; ++i){
		if (ans< arr[i]){
			ans= arr[i];
		}
	}
	return ans;
}
