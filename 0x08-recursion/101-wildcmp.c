#include "main.h"
#include <string.h>

/**
  * wildcmp - compares two strings.
  * @s1: the first string.
  * @s2: the second string.
  *
  * Return: 1 if s1 and s2 are identical or 0 otherwise.
  */
int wildcmp(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (*s1 == *s2  && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*s1 == *(s2 + 1) && len1 <= len2)
			return (wildcmp(s1, s2 + 1));
		if (*(s2 + 1) == '*' || *(s2 + 1) == '\0')
		{
			if (*(s2 + 1) == '*')
				return (wildcmp(s1, s2 + 1));
			else
				return (1);
		}
		else
			return (wildcmp(s1 + 1, s2));
	}
	else
		return (0);
}
