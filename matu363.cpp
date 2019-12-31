	int n, ans= 1, i, j=0;
	cin>>n;
	for (i= 1; i<= n; ++i){
		int check= ans;
		check*= i;
		if (ans!= check/i){
			break;
		}
		ans= check;
		j= i;
	}
	printf("%d!=%d\n", j, ans);

	return 0;
