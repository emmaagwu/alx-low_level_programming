#include "main.h"

/**
 *more_numbers - prints 10 times
 *
 */

void more_numbers(void)
{
	int n;
	int i;

	n = 1;
	while (n <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
n++;
	}
}
