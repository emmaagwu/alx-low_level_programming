#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when successful
 */

int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	if (alpha != 'q' && alpha != 'e')
	{
		putchar(alpha);
	}
}
	putchar ('\n');
return (0);
}
