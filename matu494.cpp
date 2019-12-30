class Derive
: public Base
{
	int op1, op2;
public:
	Derive(){}
	Derive(int o1, int o2) : op1(o1), op2(o2) {}
	~Derive(){}
	
	void func()
	{
		cout<<op1+op2<<endl;
	}
};
