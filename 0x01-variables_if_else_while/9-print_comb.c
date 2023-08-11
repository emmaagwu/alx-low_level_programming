#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when successful
 */

int main(void)
{
int n;
n = 0;
while (n <= 9)
{
	while (n <= 8)
	{
		putchar ('0' + n);
		putchar (',');
		putchar (' ');
		n++;
	}
	putchar ('0' + n);
	n++;
}
	putchar ('\n');
return (0);
}
