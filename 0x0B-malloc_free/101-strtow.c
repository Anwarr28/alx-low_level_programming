#include "main.h"
int count_words(char *str);
char **allocate_memory(char *str, int h);

/**
  * count_words - Function to count the number of words in the string
  * @str: the string.
  *
  * Return: the numbers of words in str.
  */
int count_words(char *str)
{
	int h = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			h++;
	}
	return (h);
}

/**
  * allocate_memory - Function to allocate memory for the words
  * @str: the string.
  * @h: the number of words.
  *
  * Return: an array of strings.
  */
char **allocate_memory(char *str, int h)
{
	int w = 0, i, j;
	char **s;

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
			w++;
			str++;
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
/**
  * strtow - splits a string into words.
  * @str: the string to be splited.
  *
  * Return: a pointer to an array of strings
  *	NULL on failure or NULL if str == NULL or str == "".
  */
char **strtow(char *str)
{
	int h;

	if (str == NULL || *str == '\0' || *str == ' ')
		return (NULL);

	h = count_words(str);

	return (allocate_memory(str, h));
}
