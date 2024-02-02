#include "hash_tables.h"

/**
 * hash_table_delete - This deletes a hash table.
 * @ht: Pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int v;

	for (v = 0; v < ht->size; v++)
	{
		if (ht->array[v] != NULL)
		{
			node = ht->array[v];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
