#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the hash table
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **array;

	if (size == 0)
		return (NULL);
	hash_table = malloc(sizeof(*hash_table));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	array = calloc(size, sizeof(*array));
	if (array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->array = array;
	return (hash_table);
}
