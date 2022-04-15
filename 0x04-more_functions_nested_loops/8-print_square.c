#include"main.h"
/**
 * print_diagonal - This function draws a diagonal line
 * @size: thise is the size of the squre
 *
 * Return: (void)
 */

void print_diagonal(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
