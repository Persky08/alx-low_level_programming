#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all possible combinations of single numbers
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar((x % 10) + '0');
		if (x == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
