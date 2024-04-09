#include "search_algos.h"

/**
 *linear_search- searches a value in an array.
 *@array: pointer to the array of integer.
 *@size: size of array.
 *@value: value to be found.
 *
 *Return: the index of the value or
 *	-1 if not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
