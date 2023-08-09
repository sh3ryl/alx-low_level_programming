#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac:argument count
 * @av:argument vector
 * Return: pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	int z = 0;
	int w = 0;
	int x = 0;
	int y = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (w < ac)
	{
		while (av[w][x])
		{
			z++;
			x++;
		}
		x = 0;
		w++;
	}
	s = malloc((sizeof(char) * z) + ac + 1);

	w = 0;

	while (av[w])
	{
		while (av[w][x])
		{
			s[y] = av[w][x];
			y++;
			x++;
		}
		s[y] = '\n';

		x = 0;
		y++;
		w++;
	}
	y++;
	s[y] = '\0';
	return (s);
}
