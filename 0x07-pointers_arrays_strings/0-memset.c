#include "main.h"
#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: array
 * @n: number of times
 * @b: byte
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
