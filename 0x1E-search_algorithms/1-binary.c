#include "search_algos.h"

/**
 *binary_search - searches for a value using Binary search algorithm
 *@array: the array of elements.
 *@size: the size of the array.
 *@value: the value to be searched for.
 *Return: -1 if not found or if array is NULL
 *	else return the index of the value found
 *
 *Description: print the array being searched every time it changes.
 *	e.g. at the beginning and when you search a subarray)
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
