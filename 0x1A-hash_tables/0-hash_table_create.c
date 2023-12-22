#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table.
 *@size: size of the array
 *
 *Return: a pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htl;
	unsigned long int i;

	htl = malloc(sizeof(hash_table_t));
	if (htl == NULL)
		return (NULL);

	htl->size = size;
	htl->array = malloc(sizeof(hash_node_t *) * size);
	if (htl->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		htl->array[i] = NULL;

	return (htl);
}
