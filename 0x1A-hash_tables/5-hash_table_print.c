#include "hash_tables.h"

/**
 * hash_table_print - This prints a hash table.
 * @ht: Pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int l;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (l = 0; l < ht->size; l++)
	{
		if (ht->array[l] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[l];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
