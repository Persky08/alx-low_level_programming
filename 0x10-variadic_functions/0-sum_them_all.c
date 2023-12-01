#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - all program that sums all values available
 * @n: number of values given
 *
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list args;

	va_start(args, n);

	/* accessing the elements*/
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, const unsigned int);
	}
	va_end(args);
	return (sum);
}
