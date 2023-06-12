#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 *puts_half - function that prints half of a string
 *
 * @str: string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int x;
	int y = 0;

	if (_strlen(str) % 2 != 0)
	{
		y += 1;
	}
	for (x = (_strlen(str) + y) / 2; x < _strlen(str); x++)
	{
	putchar(str[x]);
	}
	putchar('\n');
}


