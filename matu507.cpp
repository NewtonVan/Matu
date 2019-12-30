bool String::IsSubstring(const char *str)
{
	for (int i= 0; i< len; ++i){
		int j= 0;
		while ('\0'!= str[j]){
			if (str[j]!= mystr[i+j]){
				break;
			}
			++j;
		}
		if ('\0'== str[j]){
			return true;
		}
	}
	return false;
}
bool String::IsSubstring(const String &str)
{
	return IsSubstring(str.mystr);
}
int String::str2num()
{
	int ans= 0, i= 0;
	while ('\0'!= mystr[i]){
		if ('0'<= mystr[i] && '9'>= mystr[i]){
			ans*= 10;
			ans+= mystr[i]-'0';
		}
		++i;
	}

	return ans;
}
void String::toLowercase()
{
	int i= 0;
	while ('\0'!= mystr[i]){
		if ('A'<= mystr[i] && 'Z'>= mystr[i]){
			mystr[i]= mystr[i] | 0x20;
		}
		++i;
	}
}
