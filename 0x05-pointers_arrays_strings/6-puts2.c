#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * puts2 - function that prints every other character of a string
 *
 * @str: string
 *
 * Return: 0
 */
void puts2(char *str)
{
	int x;

	for (x = 0; x < _strlen(str); x++)
	{
		if (x % 2 == 0)
		{
			putchar(str[x]);
		}
	}
	putchar('\n');
}
