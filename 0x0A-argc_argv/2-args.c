#include <stdio.h>

/**
 *main - the  entry point
 *@argc: the argument count
 *@argv: the argument array
 *Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	(void)argc;
	return (0);
}
