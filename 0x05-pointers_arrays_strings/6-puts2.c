#include "main.h"

/**
 *puts2 - Prints every other character and a newline
 *@str: the string whose character is to be printed
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');

}
