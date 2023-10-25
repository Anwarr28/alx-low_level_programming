#include "main.h"

/**
  * _strstr - locates a substring.
  * @haystack: the main string to be scaned..
  * @needle: the substring to be located.
  *
  * Return: a pointer to the beginning of the locatedsubstring in the main one.
  */

char *_strstr(char *haystack, char *needle)
{
	int i, len = 0;

	while (needle[len])
		len++;
	while (*haystack)
	{
		if (*haystack == needle[0] && *(haystack + len - 1) == needle[len - 1])
			break;
		haystack++;
	}
	if (*haystack == '\0' || *needle == "")
	{
		return (NULL);
	}
	else
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (needle[i] == haystack[i])
				continue;
			else
				break;
		}
		if (needle[i] == '\0')
			return (haystack);
		else
			return (NULL);
	}

}
