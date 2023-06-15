#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * _strcpy - function that copies the string pointed to
 * @dest: character
 * @src: character
 * Return: character
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; x <= _strlen(src); x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
