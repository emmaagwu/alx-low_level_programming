#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (len = i; len > 0; len--)
	{
		_putchar(s[len - 1]);
	}

	_putchar('\n');
}
