class Table
{
protected:
	float high;
public:
	Table(){}
	Table(float h) : high(h) {}
	~Table(){}
	float GetHigh()
	{
		return high;
	}
	
};
class Circle
{
protected:
	float radius;
public:
	Circle(){}
	Circle(float r) : radius(r) {}
	~Circle(){}
	float GetArea()
	{
		return 3.14*radius*radius;
	}
	
};
class RoundTable
: public Table, public Circle
{
	char color[23];
public:
	RoundTable(){}
	RoundTable(float r, float h, char *cl) : Table(h), Circle(r)
	{
		strncpy(color, cl, 23);
	}
	~RoundTable(){}
	char *GetColor()
	{
		return color;
	}
};
