class CNumber
: public CNumberFactory
{
	int num;
public:
	CNumber(){}
	void Add(int number)
	{
		num+= number;
	}
	void Sub(int number)
	{
		num-= number;
	}
	int GetValue()
	{
		return num;
	}
	void SetValue(int number)
	{
		num= number;
	}

};
