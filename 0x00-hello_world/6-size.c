#include<stdio.h>
/**
 * main- this is the main function. Printing the size of various data types
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int intSize;
	float floatSize;
	char charSize;
	long int Longi;

	/*sizeof gives you the size of the variable*/
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charSize));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intSize));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(Longi));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(floatSize));
	return (0);
}
