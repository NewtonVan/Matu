int Date::days(int y, int m)
{
	int ans= 0;
	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			ans= 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			ans= 30;
			break;
		default:
			ans= (0== y%400) || ((y%100) && (0==y%4)) ? 29 : 28;
	}
	return ans;
}
ostream& operator<<(ostream &os, Date d)
{
	d.display();
	return os;
}
