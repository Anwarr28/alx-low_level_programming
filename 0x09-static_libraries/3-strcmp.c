#include "main.h"

/**
  * _strcmp - compare two strings
  * @s1: the first string.
  * @s2: the second string.
  *
  * Return: 0 if s1 same as s2, greater than 0 if s1 > s2
  *		and less than 0 if s1 < s2.
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
