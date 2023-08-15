#include "main.h"

/**
 * print_alphabet - this function prints lowercase alpha
 * Return: void
 */
void print_alphabet_x10(void)
{
int n = 0;
char alpha;
while (n <= 9)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
n++;
}
}
