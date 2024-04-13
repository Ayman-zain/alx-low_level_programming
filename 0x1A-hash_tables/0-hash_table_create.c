#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of hash table
 * Return:  a pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size){
	hash_table_s* table = (hash_table_s*) malloc(sizeof(hash_table_s*));
	if(!table)
	{
		return (NULL)
	}
	else
		return (table)
	table->size = size;
	table->array   = (Ht_item**) calloc(table->size, sizeof(Ht_item*));
}
