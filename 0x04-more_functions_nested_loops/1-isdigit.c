#include "main.h"
/**
 * _isdigit - test for a decimal digit
 *
 * @c: parameter to be tested
 *
 * Return: 1 if is a digit or 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
