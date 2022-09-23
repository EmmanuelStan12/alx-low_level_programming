#include "hash_tables.h"

/**
 * free_hash_node - frees a node in the hash table
 * @node: the node to free
 * Return: void
 */
void free_hash_node(hash_node_t *node)
{
	hash_node_t *current = node, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->value);
		free(current->key);
		free(current);
		current = next;
	}
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **arr;
	int size, i;

	if (ht == NULL)
		return;
	arr = ht->array;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		hash_node_t *node = arr[i];

		if (node == NULL)
			continue;
		free_hash_node(node);
	}
	free(arr);
	free(ht);
}
