#include <stdio.h>

#include <unistd.h>

#include <stdarg.h>

#include "main.h"



/**
 *
 *  *
 *
 *   *
 *
 *    *
 *
 *     */

int char_print(va_list arg)



{

	char str[2] = {'c', '\0'};

	char a;

	a = va_arg(arg, int);

	*str = a;

	write(1, str, 1);

	return (1);

}



/**
 *
 *  *
 *
 *   *
 *
 *    */

int string_print(va_list arg)



{

	int count = 0;

	char *s;

	s = va_arg(arg, char*);

	if (s == NULL)

	{

		s = "(null)";

	}

	while (*s != '\0')

	{

		write(1, s, 1);

		count = count + 1;

		s++;

	}

	return (count);

}



/**
 *
 *  *
 *
 *   *
 *
 *    */

int unsigned_bi(va_list arg)



{

	unsigned int b;

	b = va_arg(arg, unsigned int);

	return (rec(b));

}



/**
 *
 *  *
 *
 *   *
 *
 *    */

int rec(int n)



{

	int r;

	char a;

	char *s;

	s = &a;

	if (n == 1)

		r = 1;

	if (n > 0)

	{

		r = n % 2;

		n = rec(n / 2);

		a = r + '0';

		write(1, s, 1);

	}

	return (1);

}



/**
 *
 *  *
 *
 *   *
 *
 *    *
 *
 *     */

/*int percent_print()
 *
 *
 *
 * {
 *
 * write(1, "%", 1);
 *
 * return (1);
 *
 * }*/



/**
 *
 *  *
 *
 *   *
 *
 *    *
 *
 *     */



/*int decimal_print(int d)
 *
 *
 *
 * {
 *
 * if (d < 0)
 *
 * write(1, "-", 1);
 *
 * }*/