#include "main.h"

/**
 *_strncpy - copies a file to another
 *@dest: the destination file
 *@src: the source file
 *@n: the number of character
 *Return: the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

	dest[i] = src[i];
	for (; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
