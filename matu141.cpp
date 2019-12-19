#include <cstdio>
#include <iostream>
using namespace std;

class Student
{
	static int tot_grade[3];
	static int n;
	static const int maxl= 15;
	char name[maxl], num[maxl];
	int grade[3];
public:
	Student(){}
	Student(char *name, char *num, int grade0, int grade1, int grade2)
	{
		int i= 0;
		while ('\0'!= name[i]){
			this->name[i]= name[i];
			++i;
		}
		this->name[i]= '\0';
		i= 0;
		while (num[i]){
			this->num[i]= num[i];
			++i;
		}
		this->num[i]= '\0';
		grade[0]= grade0;
		tot_grade[0]+= grade0;
		grade[1]= grade1;
		tot_grade[1]+= grade1;
		grade[2]= grade2;
		tot_grade[2]+= grade2;
		++n;
	}
	~Student(){}
	void display()
	{
		cout<<num<<" "<<name<<" "<<grade[0]<<" "<<grade[1]<<" "<<grade[2]<<endl;
	}
	float average1()
	{
		return tot_grade[0]/float(n);
	}
	float average2()
	{
		return tot_grade[1]/float(n);
	}
	float average3()
	{
		return tot_grade[2]/float(n);
	}
};
int Student::tot_grade[3]= {0, 0, 0};
int Student::n= 0;

int main(){
	Student *stu1,*stu2,*stu3;
	char name1[10],name2[10],name3[10];
	char num1[12],num2[12],num3[12];
	int grade1[3],grade2[3],grade3[3];
	cin>>num1>>name1>>grade1[0]>>grade1[1]>>grade1[2];
	cin>>num2>>name2>>grade2[0]>>grade2[1]>>grade2[2];
	cin>>num3>>name3>>grade3[0]>>grade3[1]>>grade3[2];
	stu1 = new Student(name1,num1,grade1[0],grade1[1],grade1[2]);
	stu2 = new Student(name2,num2,grade2[0],grade2[1],grade2[2]);
	stu3 = new Student(name3,num3,grade3[0],grade3[1],grade3[2]);

	stu1->display();
	stu2->display();
	stu3->display();

    cout<<"The average grade of course1:"<<stu2->average1()<<endl;
	cout<<"The average grade of course2:"<<stu2->average2()<<endl;
	cout<<"The average grade of course3:"<<stu2->average3()<<endl;
	return 0;
}
