#include <stdlib.h>
#include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: the first string
 *@s2: the second string
 *Return: NULL or the pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
int i, j;
char *ptr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; *(s1 + i) != '\0';)
i++;
for (j = 0; *(s2 + j) != '\0';)
j++;
ptr = (char *)malloc(sizeof(char) * (i + j + 1));

if (ptr == NULL)
return (NULL);


for (i = 0;  s1[i] != '\0'; i++)
ptr[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++)
{
ptr[i] = s2[j];
i++;
}
ptr[i] = '\0';
return (ptr);
}

