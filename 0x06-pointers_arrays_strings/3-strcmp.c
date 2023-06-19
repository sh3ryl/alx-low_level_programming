#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function that compares two strings
 * @s1:pointer
 * @s2:pointer
 * Return:str1 < str2 - (-)char ,str1 == srt2 - 0,str1 > str2 - (+)char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
