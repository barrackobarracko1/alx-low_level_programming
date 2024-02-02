#include "hash_tables.h"

/**
 * hash_djb2 - The hash function implementing the djb2 algorithm.
 * @str: String to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int l;

	hash = 5381;
	while ((l = *str++))
		hash = ((hash << 5) + hash) + l; /* hash * 33 + l */

	return (hash);
}
