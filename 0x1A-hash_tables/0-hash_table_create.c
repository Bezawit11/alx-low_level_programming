#include "hash_tables.h"

/**
 *hash_table_create - a function that creates a hash table
 *@size: size of the array
 *Return: returns the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)

{
hash_table_t *p;
unsigned long int a = 0;
p = malloc(sizeof(hash_table_t));
if (p == NULL)
{
return (NULL);
}
p->size = size;
p->array= malloc(sizeof(hash_node_t *) * size);
if (hash_table->array == NULL)
{
free(p);
return (NULL);
}
while (i < size)
{
p->array[i] = NULL;
a = a + 1;
}
return p;
}
