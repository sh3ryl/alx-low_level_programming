#include "main.h"
#include <stdio.h>
/**
 * _strchr -  function that locates a character in a string
 * @s: string
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	if (s[x] == c)
		return (s + x);
	return (0);
}
