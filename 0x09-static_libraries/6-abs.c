#include <stdio.h>
#include "main.h"

/**
 *
 *  *_abs - computes absolute value of numbers
 *
 *   *@n: the integer
 *
 *    *Return: 0
 *
 *     */



int _abs(int n)



{

	if (n > 0)

	{

		return (n);

	}

	else if (n == 0)

	{

		return (n);

	}

	else

	{

		n = (-1 * n);

		return (n);

	}

}
