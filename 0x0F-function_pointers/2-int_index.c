#include "function_pointers.h"

/**
 *int_index - function that searches for an integer
 *@array: the array to be searched
 *@size: number of elements in the array
 *@cmp: pointer to the function
 *Return: -1 or 0 or greater than 1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);

}
