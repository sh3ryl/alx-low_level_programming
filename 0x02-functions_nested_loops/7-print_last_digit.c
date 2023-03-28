#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *@x: function parameter
 * Return: y
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;

		_putchar(y + '0');

	return (y);
}
