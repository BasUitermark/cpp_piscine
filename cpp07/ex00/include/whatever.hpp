template <typename T> 
void swap(T& x, T& y)
{
	T	swap;

	swap = x;
	x = y;
	y = swap;
}

template <typename T>
T min(T& x, T& y)
{
	if (x < y)
		return (x);
	return (y);
}

template <typename T>
T max(T& x, T& y)
{
	if (x > y)
		return (x);
	return (y);
}