#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table
 * @size: The size of the table
 * Return: A pointer to the created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);


	table = calloc(size, sizeof(hash_node_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t **));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
