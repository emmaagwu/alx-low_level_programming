#include "main.h"

/**
 *rev_string - reverses a string
 *@s: the string to be reversed
 *
 *Return: void
 */

void rev_string(char *s)
{
	int i, temp, len;

	for (i = 0; *(s + i) != '\0';)
	{
		i++;
	}
	len = i - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
	}
}
