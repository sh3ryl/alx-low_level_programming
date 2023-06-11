#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: string
 *
 * Return: 0
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int x;

	while (*y != '0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (x = 0; x <= t; x++)
	{
		if (x % 2 == 0)
		{
			putchar(str[x]);
		}
	}
	putchar('\n');
}
