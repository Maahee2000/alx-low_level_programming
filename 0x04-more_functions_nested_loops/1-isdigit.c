#include"main.h"

/**
 * _isdigit - Check for digits (0 through 9)
 * @c: int type param
 *
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
