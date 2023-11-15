#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- A program to print alphabet in small letters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

