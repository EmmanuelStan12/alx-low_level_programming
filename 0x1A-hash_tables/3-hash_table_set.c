#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hast table
 * @key: the key
 * @value: the value
 * Return: status
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new_node, *elem;
	hash_node_t **arr;

	if (key == NULL)
		return (0);
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	arr = ht->array;
	elem = arr[index];
	if (elem == NULL)
	{
		arr[index] = new_node;
		return (1);
	}
	while (elem->next != NULL)
		elem = elem->next;
	elem->next = new_node;
	return (1);
}
