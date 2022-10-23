#include "hash_tables.h"

/**
 *key_index - a function that gives you the index of a key
 *@key: our key
 *@size: size of the array of the hash table
 *Return: Returns the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)

{
unsigned long int a = hash_djb2(key) % size;
return (a);
}
