	for (i= 0; i< maxLen; ++i){
		j= i;
		a[i]= a[i]+b[i];
		if (a[i]> 9){
			++j;
			++a[j];
			a[i]-= 10;
		}
	}
	while (-1< j){
		cout<<a[j--];
	}
