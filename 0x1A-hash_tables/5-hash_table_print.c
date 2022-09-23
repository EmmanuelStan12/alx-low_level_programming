#include "hash_tables.h"

/**
 * hash_table_print - prints the hast table.
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **arr;
	int size, i, has_first_element_print = 0;

	if (ht == NULL)
		return;
	arr = ht->array;
	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		hash_node_t *node;

		node = arr[i];
		if (node == NULL)
			continue;
		if (has_first_element_print != 0)
			printf(", ");
		if (node->next != NULL)
		{
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				if (node->next != NULL)
					printf(", ");
				node = node->next;
			}
			continue;
		}
		printf("'%s': '%s'", node->key, node->value);
		has_first_element_print = 1;
	}
	printf("}\n");
}
