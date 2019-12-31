	flag= 0==year%400 || (year%100 && 0== year%4) ? 1 : 0;
	month= k= 1;
	while (1){
		if (daysNum> days[flag][month]){
			daysNum-= days[flag][month];
			++month;
		}
		else{
			day= daysNum;
			break;
		}
	}
