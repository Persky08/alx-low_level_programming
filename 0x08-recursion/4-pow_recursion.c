#include "main.h"
/**
 * _pow_recursion - a function that returns the value of power of a number
 * @x: the number is question
 * @y: the power of the number
 *
 * Return: the power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
