#include "main.h"

/**
  * str_concat - concatenate two strings togeter.
  * @s1: the first string.
  * @s2: the second string.
  *
  * Return: a pointer to the new string or a NULL on failure.
  */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len, len1, len2, i, j;

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2 + 1;

	if (s1 == NULL)
		len = len2 + 1;
	else if (s2 == NULL)
		len = len1 + 1;
	else if (s2 == NULL && s1 == NULL)
		len = 0;

	s = (char *) malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < len2; i++, j++)
		s[i] = s2[j];
	s[i] = '\0';

	return (s);
}
