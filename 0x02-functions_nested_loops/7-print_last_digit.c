#include"main.h"

/**
 * print_last_digit - this function print the last number of a digit.
 *
 * @r: is acii character
 *
 * Return: Always 0
 */
int print_last_digit(int r)
{
	int i;

	i = r % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + 0);
	return (i);
}
