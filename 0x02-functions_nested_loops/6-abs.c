#include "main.h"
#include <stdio.h>

/**
 * _abs - computes absolute value of an integer
 *
 * @x: parameter to be checked
 *
 * Return: always x
 */

int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
