#include "main.h"

/**
  * strtow - splits a string into words.
  * @str: the string to be splited.
  *
  * Return: a pointer to an array of strings
  *	NULL on failure or NULL if str == NULL or str == "".
  */
char **strtow(char *str)
{
	int h = 0, w = 0, i, j;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == ' ')
			i++;
		while (str[i] != ' ')
			i++;
		h++;
	}
	s = (char **) malloc(sizeof(char *) * (h + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		while (*str == ' ')
			str++;
		while (*str != ' ' && *str != '\0')
		{
			str++;
			w++;
		}
		s[i] = (char *) malloc(sizeof(char) * (w + 1));
		if (s[i] == NULL)
		{
			while (i >= 0)
			{
				free(s[i]);
				i--;
			}
			free(s);
			return (NULL);
		}
		for (j = 0; j < w; j++)
			s[i][j] = *(str - w + j);
		s[i][j] = '\0';
		w = 0;
		i++;
	}
	s[i] = NULL;
	return (s);
}
