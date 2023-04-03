#include "main.h"
/**
 * print_line - function that prints a line
 *
 * @n: number of times a character should be printed
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
