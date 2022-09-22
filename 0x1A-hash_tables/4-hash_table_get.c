#include "hash_tables.h"

/**
 * hash_table_get - gets an element in the hash table
 * @ht: the hash table
 * @key: the key
 * Return: the value of the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t **arr, *elem;

	index = key_index((const unsigned char *)key, ht->size);
	arr = ht->array;
	if (arr[index] == NULL)
		return (NULL);
	elem = arr[index];
	if (elem->next == NULL)
	{
		const char *k = elem->key;

		if (strcmp(k, key) == 0)
			return (elem->value);
		return (NULL);
	}
	while (elem != NULL)
	{
		const char *k = elem->key;
		
		if (strcmp(k, key) == 0)
			return (elem->value);
		elem = elem->next;
	}
	return (NULL);
}
