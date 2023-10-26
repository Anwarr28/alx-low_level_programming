#include "main.h"

/**
  * _strlen_recursion - return the length of a string.
  * @s: the string its length will be calculated.
  *
  * Return: the length of string s.
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
  * checkStr - scan the string s to check if it is a palindrome
  * @s: the string to be checked.
  * @i: the index to check with.
  *
  * Return: same as is_palindrome function.
  */
int checkStr(char *s, int i)
{
	if (*s != *(s + i))
		return (0);
	if (s == (s + i - 1) || s == (s + i))
		return (1);
	return (checkStr(s + 1, i - 2));
}
/**
  * is_palindrome - check if a string is a palindrome.
  * @s: the string to be checked.
  *
  * Return: 1 if the string is palindrome or 0 otherwise.
  */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (checkStr(s, len - 1));
}
