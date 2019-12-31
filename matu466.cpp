	flag= 0==year%400 || (year%100 && 0== year%4) ? 1 : 0;
	month= 1;
	while (daysNum> days[flag][month]){
		daysNum-= days[flag][month];
		++month;
	}
	day= daysNum;
