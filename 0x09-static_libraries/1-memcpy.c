#include <stdio.h>
#include "main.h"

/**
 *
 *  *_memcpy - a function
 *
 *   *@dest: pointer
 *
 *    *@src:pointer
 *
 *     *@n: int
 *
 *      *Return: returns a pointer
 *
 *       */

char *_memcpy(char *dest, char *src, unsigned int n)



{

	unsigned int i;

	for (i = 0; i < n; i++)

	{

		*(dest + i) = *(src + i);

	}

	return (dest);

}
