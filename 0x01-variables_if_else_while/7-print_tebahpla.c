#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when successful
 */

int main(void)
{
char alpha;
alpha = 'z';
while (alpha >= 'a')
{
	putchar (alpha);
	alpha--;
}
	putchar ('\n');
return (0);
}
