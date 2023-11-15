#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
			return (0),
			       i++;
	}
	return (1);
}

/**
 * _strlen - find length of a string
 * @str: string in question
 * 
 * Return: 0.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - check for errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit (98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	char *a, *b;
	int l1, l2, sum
