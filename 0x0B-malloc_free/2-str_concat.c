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
	unsigned long int len = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = strlen(s1) + strlen(s2);
	s = (char *) malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		s[i] = s1[i];
	for (j = 0; j < strlen(s2); i++, j++)
		s[i] = s2[j];
	s[i] = '\0';

	return (s);
}
