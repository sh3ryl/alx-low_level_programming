#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - fxn that prints sum of two diagonals
 * of a square matrix of ints
 * @a: array
 * @size: of diagonal
 */
void print_diagsums(int *a, int size)
{
	int x;
	int y = 0;
	int z = 0;

	for (x = 0; x < size; x++)
	{
		y += a[(x * size) + x];
		z += a[(size - 1) + ((size - 1) * x)];
	}
	printf("%d, %d\n", y, z);
}

