#include <stdio.h>
#include <string.h>
#include "main.h"



/**
 *
 *  *_strcpy - copies pointed string
 *
 *   *@dest: pointer
 *
 *    *@src: pointer
 *
 *     *Return: returns character
 *
 *      */

char *_strcpy(char *dest, char *src)



{

	int l, a;

	l = strlen(src);

	for (a = 0; a <= l; a++)

	{

		*(dest + a) = *(src + a);

	}

	return (dest);

}
