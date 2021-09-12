#include <unistd.h>

int main()
{
	int x = 5;
	int y = 1;

	int col;
	int low;

	if (x < 1 || y <1)
	{
		return (0);
	}

	low = 0;
	while(low < y)
	{
		col = 0;
		while(col < x)
		{
			if((col == 0 && low == 0) 
			|| (col == x-1 && low == y-1 && col != 0 && low != 0))
				write(1, "A", 1);
			else if ((col == 0 && low == y-1) || (col == x-1 && low == 0))
				write(1, "C", 1);
			else if (low == 0 || low == y-1 || col == 0 || col == x-1)
				write(1, "B", 1);
			else
				write(1, " ", 1);
			col ++;
		}
		write(1, "\n", 1);
		low++;
	}
	return (0);
}