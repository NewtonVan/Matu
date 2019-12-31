class Cat
: public Felid
{
public:
	Cat()
	{
		cout<<"Cat constructor..."<<endl;
	}
	~Cat()
	{
		cout<<"Cat destructor..."<<endl;
	}
	void sound() const
	{
		cout<<"Miaow!"<<endl;
	}
	
};
class Leopard
: public Felid
{
public:
	Leopard()
	{
		cout<<"Leopard constructor..."<<endl;
	}
	~Leopard() 
	{
		cout<<"Leopard destructor..."<<endl;
	}
	void sound() const
	{
		cout<<"Howl!"<<endl;
	}
	
};
Felid* Felid:: createCat()
{
	return new Cat;
}
Felid* Felid:: createLeopard()
{
	return new Leopard;
}
