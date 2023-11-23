#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int is_digit(char *str);
int _atoi(char *str);
int multiply(char *str, char *str1);
void errors(void);
int _putchar(char c);

/**
 * main - a function that multiplies to number
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int product;

	if ((argc != 3) || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		errors();
	}
	product = multiply(argv[1], argv[2]);
	return (product);
}
/**
 * is_digit - a function that checks if a sting contains onlyy digits
 *  @str: string to be evaluated
 *
 * Return: 0
 */

int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * _atoi - a function that converts string to an integer
 * @str: string to be converted
 *
 * Return: integer
 */
int _atoi(char *str)
{
	int outcome = 0;

	while (*str != '\0')
	{
		if (*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		outcome = outcome * 10 + (*str - '0');
		str++;
	}
	return (outcome);
}

/**
 * errors - check for errors for main
 *
 * Return: void
 */
void errors(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
/**
 * multiply - multiplies two positive numbers
 * @str: first number
 * @str1: second number
 *
 * Return: integer
 */
int multiply(char *str, char *str1)
{
	int x, y, results;

	x = _atoi(str);
	y = _atoi(str1);
	results = x * y;
	return (results);
}

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
