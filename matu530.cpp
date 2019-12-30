	int x=1, y= 2;
	namespace nsB
	{
		char x= 'a', y= 'b';
		int add_something(int z)
		{
			return 2+z;
		}
	}
	int add_something(int z)
	{
		return 1+z;
	}
