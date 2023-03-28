#include "main.h"

/**
 * times_table - function that prints out times table
 * Return: always 0
 */

void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int z = (x * y);

			if (y == 0)
			{
				_putchar ('0');
			}
			else if (z <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
