#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when successful
 */
int main(void)
{
int i = 0;
int j = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
		       if (i != j && i < j)
		       {
			       putchar(i + '0');
			       putchar(j + '0');
			       if (!(i == 8 && j== 9))
			       {
				       putchar(',');
				       putchar(' ');
			       }
		       }
		j++;
		}
	i++; 
	j = 0;
	}    
putchar('\n');
return 0; 
} 
