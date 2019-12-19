#include "CString.h"
int String::str2num()
{
	int num= 0;
	for (int i= 0; i< len; ++i){
		if ('0'<= mystr[i] && '9'>= mystr[i]){
			num*= 10;
			num+= mystr[i]-'0';
		}
	}

	return num;
}
bool String::IsSubstring(const char *str)
{
	int j= 0;
	const int l= strlen(str);
	for (int i= 0; i< len; ++i){
		if (mystr[i]== str[j]){
			++j;
			if (l== j){
				return true;
			}
		}
		else{
			j= 0;
			if (mystr[i]== str[j]){
				++j;
			}
		}
	}
	return false;
}
bool String::IsSubstring(const String &str)
{
	return IsSubstring(str.mystr);
}
void String::toUppercase()
{
	for (int i= 0; i< len; ++i){
		if ('a'<= mystr[i] && 'z'>= mystr[i]){
			mystr[i]&= 0x5f;
		}
	}
}
