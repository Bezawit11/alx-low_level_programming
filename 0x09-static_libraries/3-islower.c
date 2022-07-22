#include <stdio.h>
#include "main.h"



/**
 *
 *  *_islower - checks for lowercase alphabets
 *
 *   *@c: The character to print
 *
 *    *Return: 1 (Success)
 *
 *     */

int _islower(int c)



{

	if (c >= 97 && c <= 122)

		return (1);

	else

		return (0);

}
