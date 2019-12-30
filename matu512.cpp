int operator [] (int idx)
{
	if (idx< 0 || idx+1 > SIZE){
		cout<<"InvalidIndex"<<endl;
		return arr[0];
	}
	return arr[idx];
}
