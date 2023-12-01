#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: a command to separate the strings
 * @n: number of strings
 *
 * Return:0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);
	/* getting the strings*/
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		/* setting condition for the command to avoid printing after lastname*/
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
