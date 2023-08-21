#include "main.h"

/**
 *puts_half - prints half of a string, followed by a new line
 *@str: the string argument
 */

void puts_half(char *str)
{
	int i, len;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}

	len = i;
	if (len % 2 == 0)
	{
	for (i = (len / 2); str[i] != '\0'; i++)
	{
		_putchar(str[i]);		
	}
		_putchar('\n');
	}
	else if (len % 2 == 1)
	{
	for (i = ((len - 1) / 2); str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
	}

}
