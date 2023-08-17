#include "main.h"

/**
 *print_diagonal - print diagonal line
 *@n: width of the line
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n != 0)
	{
		j = 1;
		i = 1
		while (j <= n)
		{
			_putchar(' ');
			if (i == j)
			{
		_putchar(92);
		_putchar('\n');
			}
		j++;
		i++;
		}
	 _putchar('\n');
	}
}
