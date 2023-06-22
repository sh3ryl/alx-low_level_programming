#include "main.h"
#include <stdio.h>
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: string
 * @accept: bytes
 * Return: no of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	unsigned int z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
				break;
			}
		}
		if (s[y] == '\0')
			return (z);
	}
	return (z);
}
