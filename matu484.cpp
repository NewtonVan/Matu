Location & Location::operator +(Location &offset)
{
	x+= offset.x;
	y+= offset.y;
	z+= offset.z;
	return *this;
}
Location & Location::operator -(Location &offset)
{
	x-= offset.x;
	y-= offset.y;
	z-= offset.z;
	return *this;
}
