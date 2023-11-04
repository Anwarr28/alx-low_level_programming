#include "main.h"

/**
  * string_nconcat - concatenate two strings.
  * @s1: the first string.
  * @s2: the second string.
  * @n: the number of bytes taken form s2.
  *
  * Return: a pointer to the new allocated memory with the new string
  *		NULL on failure.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int i, j, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	len = strlen(s1) + n + 1;
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		ptr[i] = s2[j];
	ptr[len - 1] = '\0';
	return (ptr);
}
