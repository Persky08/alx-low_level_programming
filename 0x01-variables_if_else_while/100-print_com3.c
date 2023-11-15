nclude <stdio.h>
#include <stdlib.h>
/**
 *  * main - A program that prints all possible combinations of single numbers
 *   *
 *    * Return: Always 0(success)
 *     */
int main(void)
{
       	int x;

       	for (x =10; x <= 99; x++)
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
