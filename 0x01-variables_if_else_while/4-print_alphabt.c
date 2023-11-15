#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Printing alphabet except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
		al++;
	}
	putchar('\n');
	return (0);
}
