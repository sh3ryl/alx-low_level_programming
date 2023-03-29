#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - a function that prints natural numbers
 * @n: function parameter
 * Return: always 0
 */

void print_to_98(int n)
{
	int x;

	if (n >= 0 && n <= 98)
	{
		for (x = n; n <= 98; x++)
		{
			printf("%d,", x);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d,", x);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d,", x);
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d,", n);
}
