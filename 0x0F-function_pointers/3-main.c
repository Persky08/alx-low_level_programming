#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function to perform operation on two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: results
 */
int main(int argc, char *argv[])
{
	char *op; /* operator*/
	int num1, num2;/* the numbers involved*/

	if (argc != 4) /* number of argurments cal n1 + n2*/
	{
		printf("Error\n");
		exit(98);
	}
	/* inputs using atoi*/
	num1 = atoi(argv[1]); /* first input. change to int if string*/
	op = (argv[2]); /* operator*/
	num2 = atoi(argv[3]); /* second input. change to int if string*/
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	/* checking to see if the second number is 0 in the case of / and %*/
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	/* displaying the results*/
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}

