#include "main.h"
#include <stdio.h>
/**
 * string_toupper - fxn that changes lowercase letters of a string to uppercase
 * @x: character
 * Return: value in uppercase
 */
char *string_toupper(char *x)
{
	int y;

	for (y = 0; x[y] != '\0'; y++)
		if (x[y] >= 'a' && x[y] <= 'z')
			x[y] = x[y] - 32;

	return (x);
}
