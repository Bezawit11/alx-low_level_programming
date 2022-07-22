#include <stdio.h>
#include "main.h"



/**
 *
 *  *_isupper - checks for uppercase character
 *
 *   *@c: inputs alphabet
 *
 *    *Return: returns a value
 *
 *     */

int _isupper(int c)



{

	int result;

	if (c >= 'A' && c <= 'Z')

	{

		result = 1;

	}

	else

	{

		result = 0;

	}

	return (result);

}
