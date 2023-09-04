#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str: the pointer to the original string
 *Return: NULL when unsuccessful or pointer when successful
 */


char *_strdup(char *str)
{
int size, i;
char *ptr;

if (str == NULL)
return (NULL);

i = 1;
while (*(str + i) != '\n')
i++;
size = i;
ptr = (char *)malloc(sizeof(char) * size);
if (ptr == NULL)
return (NULL);
else
{
for (i = 0; i < size; i++)
*(ptr + i) = *(str + i);
}
return (ptr);
}
