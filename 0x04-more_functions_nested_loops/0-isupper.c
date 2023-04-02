#include "main.h"
/**
 * _isupper - test for an uppercase letter
 *
 * @c: parameter to be tested
 *
 * Return: 1 if uppercase or 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
