#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function that copies a string
 *
 * @dest: destination
 * @src: source
 * @n: character
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
		
		dest[x] = '\0';
	}
	return (dest);
}
