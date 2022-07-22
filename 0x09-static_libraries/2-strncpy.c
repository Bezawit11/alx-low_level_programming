#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *
 *  *_strncpy - copies a string
 *
 *   *@dest: character pointer
 *
 *    *@src: character pointer
 *
 *     *@n: number of elements
 *
 *      *Return: returns a char
 *
 *       */

char *_strncpy(char *dest, char *src, int n)



{

	int i, l;

	l = strlen(src);

	for (i = 0; i < n; i++)

	{

		if (l > n)

		{

			for (i = 0; i < n; i++)

			{

				*(dest + i) = *(src + i);

			}

		}

		else

		{

			for (i = 0; i <= l; i++)

			{

				*(dest + i) = *(src + i);

			}

			for (i = l + 1; i < n; i++)

			{

				*(dest + i) = '\0';

			}

		}

	}

	return (dest);

}
