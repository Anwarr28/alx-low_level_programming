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
	unsigned int i, len = 0;

	if (n > strlen(s2))
		n = strlen(s2);
	if (s1 == NULL)
		s1 = "";
	len = strlen(s1) + n + 1;
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len - 1; i++)
	{
		if (i < strlen(s1))
			ptr[i] = s1[i];
		else
		{
			ptr[i] = *s2;
			s2++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
