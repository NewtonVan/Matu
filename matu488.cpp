Clock::Clock(int h, int m, int s)
{

	hour= -1< h && h< 24 ? h : 0;
	minute= -1< m && m< 60 ? m : 0;
	second= -1< s && s< 60 ? s : 0;
}
