#include <iostream>
using namespace std;
class Clock{
	int hour;
	int minute;
	int second;

	int Ahour;
	int Aminute;
	int Asecond;
public:
	Clock(int h, int m, int s);
	void SetAlarm(int h, int m, int s);
	void run();
	void ShowTime()
	{
		cout<<"Now:"<<hour<<":"<<minute<<":"<<second<<endl;
	}
};
