#include "main.h"
#include <unistd.h>

/**
  * main - this is the main function
  * _putchar - Prints the string input
  * Return: 0 when successful
  */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
return (0);
}

/**
  *_putchar - prints the string input
  * Return: 0 when successful
  * @c: The character to be printed
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
