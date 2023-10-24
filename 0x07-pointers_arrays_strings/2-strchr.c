#include "main.h"

/**
  * _strchr - locates the character c in string s.
  * @s: the stirng to be scaned.
  * @c: the character to be searched for.
  *
  * Return: a pointer to the first occurence @c in @s or NULL if not found.
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return(s);
	return (NULL);
}
