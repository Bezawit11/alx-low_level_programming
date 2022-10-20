#include "hash_tables.h"

/**
 *
 *
 */
hash_table_t *hash_table_create(unsigned long int size)

{
hash_table_t *p;
hash_node_t **h = NULL;
p = malloc(sizeof(hash_table_t));
p->size = size;
p->array= h;
return p;
}
