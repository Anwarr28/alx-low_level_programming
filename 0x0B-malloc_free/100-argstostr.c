#include "main.h"

/**
  * argstostr - concatenates all the aarguments of your program.
  * @ac: the number of args.
  * @av: an array of the args.
  *
  * Return: a pointer to a new string or a null if fails.
  */
char *argstostr(int ac, char **av)
{
	char *s;
	int a = 0, i, j, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}
	size = size + ac + 1;
	s = (char *) malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; a++, j++)
		{
			s[a] = av[i][j];
		}
		s[a++] = '\n';
	}
	s[a] = '\0';
	return (s);
}
