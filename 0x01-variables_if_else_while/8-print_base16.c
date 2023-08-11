#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when successful
 */

int main(void)
{
int n;
char alpha;
n = 0;
alpha = 'a';
while (n <= 9)
{
	putchar ('0' + n);
	n++;
}
while (alpha <= 'f')
{
	putchar (alpha);
	alpha++;
}
	printf("\n");
return (0);
}
