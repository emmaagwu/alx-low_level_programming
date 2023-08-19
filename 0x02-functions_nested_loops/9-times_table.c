#include "main.h"

/**
 *times_table - Prints 9 times table
 *Return: void
 */

void times_table(void)
{
int step;
int n;

for (step = 0; step <= 9; step++)
{
	for (n = 0; n <= 9; n++)
	{

	int m;

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
	if (n != 9 && (step * (n + 1) <= 9))
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	else if (n != 9 && (step * (n + 1) > 9))
	{
	_putchar(',');
	_putchar(' ');
	}
	else
	{
	_putchar('\n');
	}
	}
}
}
