#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: given hash table
 * @key: given hash key
 *
 * Return: value associated with @key, null if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *n;

	if (!ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	n = ht->array[index];

	while (n)
	{
		if (strcmp(n->key, key) == 0)
			return (n->value);
		n = n->next;
	}
	return (NULL);
}
