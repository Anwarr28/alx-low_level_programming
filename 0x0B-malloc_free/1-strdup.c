#include "main.h"

/**
  * _strdup - copies the str giving int a newly allocated space in memo.
  * @str: the string given.
  *
  * Return: a pointer to a new string or NULL for if str = NULL
  *		and insufficiet memo.
  */
char *_strdup(char *str)
{
	char *dpstr;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len])
	{
		len++;
	}

	dpstr = (char *) malloc(sizeof(char) * (len + 1));

	if (dpstr == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		dpstr[i] = str[i];
		i++;
	}
	dpstr[i] = '\0';
	return (dpstr);
}
