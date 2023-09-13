#include <stdlib.h>

/**
 *array_iterator - executes a function given as a
 *parameter on each element of an array
 *@array: the array to be iterated
 *@size: size of the array
 *@action: the function pointer
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
