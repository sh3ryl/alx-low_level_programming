#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: int
 * Return: character
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (y = 0; dest[y] != '\0'; y++)
	{}

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x + y] = src[x];
	}
	dest[x + y] = '\0';

	return (dest);
}
