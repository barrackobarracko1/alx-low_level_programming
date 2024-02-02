#include "hash_tables.h"

/**
 * hash_table_create - this creates a hash table.
 * @size: size of the array.
 *
 * Return: NULL if there is an error.
 *         Otherwise - pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int f;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (f = 0; f < size; f++)
		ht->array[i] = NULL;

	return (ht);
}
