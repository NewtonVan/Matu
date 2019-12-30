void operator () (int h, int m, int s)
{
	if (s> 59){
		m+= 1;
		s%= 60;
	}
	if (m> 59){
		h+= 1;
		m%= 60;
	}
	if (h> 23){
		h%= 24;
	}
	hour= h;
	minute= m;
	second= s;
}
