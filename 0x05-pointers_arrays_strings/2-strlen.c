#include "main.h"

/**
  * _strlen - return the length of a string.
  * @s: the string to be operated on.
  *
  * Return: the length of the string.
  */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}

int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
