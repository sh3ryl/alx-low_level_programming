#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
	       putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}

