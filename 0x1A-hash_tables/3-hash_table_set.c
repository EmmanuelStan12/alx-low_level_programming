#include "hash_tables.h"

/**
 * create_new_node - creates a new node
 * @key: key
 * @value: the value
 * Return: the new node
 */
hash_node_t *create_new_node(char *key, char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	return (node);
}

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
	char *k;

	if (key == NULL || ht == NULL || *key == '\n')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	arr = ht->array;
	elem = arr[index];
	if (elem == NULL)
	{
		new_node = create_new_node((char *)key, (char *)value);
		if (new_node == NULL)
			return (0);
		arr[index] = new_node;
		return (1);
	}
	while (elem != NULL)
	{
		k = elem->key;
		if (strcmp(k, key) == 0)
		{
			free(elem->value);
			elem->value = strdup((char *) value);
			return (1);
		}
		elem = elem->next;
	}
	new_node = create_new_node((char *)key, (char *)value);
	if (new_node == NULL)
		return (0);
	new_node->next = arr[index];
	arr[index] = new_node;
	return (1);
}
