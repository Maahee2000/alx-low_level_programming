#include"main.h"
#include<stdio.h>

/**
 * _abs - This function computes absolute value of an integer.
 *
 * @r: r r is acii character
 *
 * Return: always r (success) or -r (negative)
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (-r);
	}
}
