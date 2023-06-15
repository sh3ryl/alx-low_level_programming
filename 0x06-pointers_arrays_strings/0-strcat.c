#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concatenate two strings
 * @dest: destination
 * @src: source
 * Return: character
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (y = 0; dest[y] != '\0'; y++)
	{}

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[y + x] = src[x];
	}
	dest[y + x] = '\0';

	return (dest);
}
