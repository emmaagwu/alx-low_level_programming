#include <stdio.h>
#include <stdlib.h>

/**
 *main - the  entry point
 *@argc: the argument count
 *@argv: the argument array
 *Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	(void)argc;
	return (1);
}
