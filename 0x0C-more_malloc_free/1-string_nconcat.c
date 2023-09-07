#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat- concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1];)
		len1++;
	for (len2 = 0; s2[len2] != '\0';)
		len2++;

	if (n < len2)
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; n < len2 && i < (len1 + n); j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	for (j = 0; n >= len2 && i < (len1 + len2); j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
