#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- A program that prints both lower and upper cases of the alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';
	char b = 'A';

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}

	while (b <= 'Z')
	{
		putchar (b);
		b++;
	}
	putchar('\n');
	return (0);
}


