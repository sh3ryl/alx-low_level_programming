#include "main.h"
#include <stdio.h>

/**
 * swap_int -  a function that swaps the values of two integers
 * @a: - 1st integer
 * @b: - 2nd integer
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;
	*a = y;
	*b = x;
}


