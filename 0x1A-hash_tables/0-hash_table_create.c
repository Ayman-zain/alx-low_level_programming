#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of hash table
 * Return:  a pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));
	int i;

	if (!table)
	{
		return (NULL);
	}
	table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; (unsigned long int)i < size; i++)
	{
		table->array[i] = NULL;
	}
	table->size = size;
	return (table);
}

