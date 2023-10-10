#include <stdio.h>
#include "main.h"

/**
  * print_alphabet -  function prints alphabet in lowercase letters.
  *
  * Retrun: return nothing
  */

void print_alphabet(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
