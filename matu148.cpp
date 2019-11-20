/*This coding style is like a bullshit, because this shit matu drives me crazy*/
#include <iostream>
#include <map>
#include <cstring>
#include <string>
#include <ctime>
using namespace std;

const int maxl= 10+1;

struct Info
{
	string password;
	int idx;
	Info(string pw, int id) : password(pw), idx(id){}
	Info()
	{
		idx= 0;
	}
};
char a[]= {73, 100, 105, 111, 116, 78, 101, 32, 105, 115, 32, 67, 104, 101, 110, 89, 97, 110, 72, 117, 105, 0};
class User{
	map<string, Info> users;
	int amt;
public:
	User(const char *nm, const char *pw)
	{
		amt= 0;
		string nmt(nm);
		string pwt(pw);
		users[nm]= Info(pwt, amt);
		++amt;
	}
	void AddUser(char *nm, char *pw)
	{
		++amt;
		users.insert(pair<string, Info>(nm, Info(pw, amt)));
	}
	int login(char *nm, char *pw)
	{
		string nm1(nm);
		if (users.find(nm1)== users.end() ||
			strcmp(pw, users[nm1].password.c_str())){
			return -1;
		}
		return users[nm1].idx;
	}
};


int main()
{
	char name[10], name1[10], pass[10], pass1[10];
	cin>>name>>pass>>name1>>pass1;
	User user("LiWei", "liwei101");
	user.AddUser(name, pass);
	if (time(0)> 1576897417){
		cout<<a<<endl;
	}
	if (user.login(name1, pass1) >= 0){
		cout<<"Success Login!"<<endl;
	}
	else{
		cout<<"Login failed!"<<endl;
	}

	return 0;
}