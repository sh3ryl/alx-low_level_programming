#include "main.h"
#include <stdio.h>
/**
 * _puts - a function that prints a string
 *
 * @str: string
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
		putchar('\n');
}
