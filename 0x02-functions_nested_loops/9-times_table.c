#include "main.h"

/**
 *times_table - Prints 9 times table
 *Return: void
 */

void times_table(void)
{
int step;
int n;
int m;

for (step = 0; step <= 9; step++)
{
	for (n = 0; n <= 9; n++)
	{
	m = n * step;
	if (m > 9)
	{
	_putchar((m / 10) + '0');
	_putchar((m % 10) + '0');
	}
	else
	{
	_putchar(m + '0');
	}
	if (n != 9)
	{
	if (m > 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	}
	else
	{
	_putchar('\n');
	}
	}
}
return;
}
