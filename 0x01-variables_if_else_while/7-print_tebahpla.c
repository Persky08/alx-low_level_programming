#include <stdio.h>
#include <stdlib.h>
/**
 * main- A program that prints alphabets in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char as;

	for (as = 'z'; as >= 'a'; as--)
		putchar(as);
	putchar('\n');
	return (0);
}


