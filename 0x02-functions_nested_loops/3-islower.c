#include "main.h"

/**
 * _islower - tests for a lowercase letter
 *
 *@c: parameter to be tested
 *
 * Return:1 if lowercase , 0 if not lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
