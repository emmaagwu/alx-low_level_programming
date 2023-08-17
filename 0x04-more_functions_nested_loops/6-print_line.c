#include "main.h"

/**
 *print_line - draws a straight line
 *
 *@n: length of line
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
