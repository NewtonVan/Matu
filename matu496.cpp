friend Base& operator +(int a, Base b)
{
	b.op1+= a;
	b.op2+= a;
	return b;
}
