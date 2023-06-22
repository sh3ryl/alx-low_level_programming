#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory area
 * @dest: destination
 * @src: source
 * @n: number of times
 * Return:
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
