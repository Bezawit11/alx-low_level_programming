#include <stdio.h>
#include "main.h"

/**
 *
 *  *_isalpha - checks alphabets
 *
 *   *@c: this is our integer
 *
 *    *Return: 1 (Succes)
 *
 *     */

int _isalpha(int c)



{

	if (c >= 65 && c <= 90)

		return (1);

	else if (c >= 90 && c <= 122)

		return (1);

	else

		return (0);

}
