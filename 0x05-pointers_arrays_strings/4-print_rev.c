#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - a function that prints a string, in reverse
 *
 * @s: string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	for (x -= 1; x >= 0; x--)
	{
		putchar(s[x]);
	}
	putchar('\n');
}
