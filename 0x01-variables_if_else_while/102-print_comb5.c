#include <stdio.h>
#include <stdlib.h>

/**
* main - A program that prints all possible combinations of single numbers
*
* Return: Always 0(success)
*/
int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
		for (y = x + 1; y <= 99 ; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			putchar(',');
			putchar(' ');
		}
			putchar('\n');
			return (0);
}
