#include "hash_tables.h"

/**
*key_index- gives the index of a key
*@size: array of hash table size
*@key: key
*
*Return: key index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
