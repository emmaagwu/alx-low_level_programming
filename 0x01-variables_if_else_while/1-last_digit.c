#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - this is the main function.
 * Return: 0 when successful.
 * betty style doc for function main goes there */
int main(void)
{
int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
else if (lastDigit == 0)
	printf("Last digit of %d is 0 and is 0\n", n);
else if (lastDigit < 6)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
return (0);
}
