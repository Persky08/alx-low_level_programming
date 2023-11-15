#include <stdio.h>
#include <stdlib.h>
/**
 * main- A program to print the numbers available in base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar((a % 10) + '0');
	}
	putchar('\n');
	return (0);
}
