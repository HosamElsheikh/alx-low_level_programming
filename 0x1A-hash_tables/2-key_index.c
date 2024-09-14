#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: The key
 * @size: Size of the array of the hash table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ret_ind;

	if (key == NULL || size == 0)
		return (0);

	ret_ind = hash_djb2(key);
	ret_ind %= size;
	return (ret_ind);
}
