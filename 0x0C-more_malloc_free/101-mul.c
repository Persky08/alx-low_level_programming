#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int is_digit(char *str);
int _atoi(char *str);
int multiply(char *str, char *str1);
void errors(void);
/**
 * is_digit - a function that checks a string contains only digits
 * @str: string to be evaluated
 *
 * Return: 0.
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
	int outcome = o;

	while (*str != '\0')
	{
		if (*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

/**
 * errors - check for errors for main
 *
 * Return: void
 */
void errors(void)
{
	printf("Error\n");
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

	x = _atoi(char *str);
	y = _atoi(char *str1);
	results = x * y;
	return (results);
}
/**
 * main - main function to multiply to positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: product of two numbers
 */
int main(int argc, *char argv[])
{
	int product;

	if ((argc != 3) || !is_digit(argv[1] || !is_digit(argv[2]))
			error();
			product = (int *)malloc(sizeof(int);
				if (product == NULL)
				exit(1);
			product = multiply(argv[1], argv[2]);
			free(product);
			printf("The product is %d\n", product);
			}
