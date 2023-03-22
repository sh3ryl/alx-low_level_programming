#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	{
		putchar('\n');
	}
	return (0);
}
