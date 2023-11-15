#include <stdio.h>
#include <stdlib.h>
/**
 * main- numbers in base 16
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	char b;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (b = 'a'; b <= 'f'; b++)
		putchar(b);

	putchar('\n');
	return (0);
}


