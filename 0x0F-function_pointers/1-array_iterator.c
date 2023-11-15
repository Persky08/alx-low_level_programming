#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * @array: - array of number
 * @size: size of array
 * @action: pointer to the function void
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
