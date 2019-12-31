	int i= 0, sgn= -1;
	double trm, ans= 0.0;
	while (1){
		sgn*= -1;
		trm= 1.0/(2*i+1);
		++i;
		ans+= sgn*trm;
		if (trm< FLAG){
			break;
		}
	}
	printf("steps=%d PI=%.5f", i, 4*ans);
