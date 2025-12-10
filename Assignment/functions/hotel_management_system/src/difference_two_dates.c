#include <main.h>

int count_days(int d, int m, int y)
{
	int total = d;

	for (int i = 1; i < m; i++) 
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			total += 31;
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			total += 30;
		else if (i == 2) 
		{
			// Check for leap year
			if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
				total += 29;
			else
				total += 28;
		}
	}

	// Add days for full years before this year
	total += (y - 1) * 365;
	total += (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;

	return total;
}

int difference_two_dates(int d1, int d2, int m1, int m2, int y1, int y2)
{
	return count_days(d2, m2, y2) - count_days(d1, m1, y1);
}

