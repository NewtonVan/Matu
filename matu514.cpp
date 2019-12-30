class Staff
: public Worker
{
	float salary;
public:
	Staff(char *n, int id, int ag, float sal) : Worker(n, id, ag), salary(sal) {}
	~Staff(){}
	void display(){

	    cout<<"Name:"<<name<<endl;

	    cout<<"ID:"<<ID<<endl;

	    cout<<"Age:"<<age<<endl;
	    cout<<"Salary:"<<salary<<endl;

    }
	
};
class Manager
: public Worker
{
	char university[50];
public:

	Manager(char *n, int id, int ag, char *clg) : Worker(n, id, ag)
	{
		strncpy(university, clg, 50);
	}
	~Manager(){}
	void display(){

	    cout<<"Name:"<<name<<endl;

	    cout<<"ID:"<<ID<<endl;

	    cout<<"Age:"<<age<<endl;
	    cout<<"University:"<<university<<endl;

    }
};
