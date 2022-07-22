#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *  *_strncat - a function that concatenates
 *
 *   *@dest: pointer
 *
 *    *@src: pointer
 *
 *     *@n: bytes
 *
 *      *Return: returns a pointer
 *
 *       */

char *_strncat(char *dest, char *src, int n)



{

	int l, i, d, c;

	l = strlen(dest);

	d = strlen(src);

	c = l + d;

	for (i = 0; i < n; i++)

	{

		if (i > c)

			break;

		*(dest + l + i) = *(src + i);

	}

	return (dest);

}
