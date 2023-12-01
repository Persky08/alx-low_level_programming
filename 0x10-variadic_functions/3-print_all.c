#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 *
 * Return:
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *str;
	int n;


	va_start(args, format);
	for (i = 0; i

