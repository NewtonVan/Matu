class Car
: public Transport
{
	char num[10];
public:

	Car(char *colr, float v, char *p, char *nn) : Transport(colr, v, p)
	{
		strncpy(num, nn, 10);
	}
	~Car(){}
	virtual void display()

	{

	  cout<<"color:"<<color<<",velocity:"<<velocity<<",place:"<<place<<",num:"<<num<<endl;

	}
	
};
class Train
: public Transport
{
	float price;
public:

	Train(char *c, float v, char *p, float prc) : Transport(c, v, p), price(prc) {}
	~Train(){}
	virtual void display()

	{

	  cout<<"color:"<<color<<",velocity:"<<velocity<<",place:"<<place<<",price:"<<price<<endl;

	}
	
};
