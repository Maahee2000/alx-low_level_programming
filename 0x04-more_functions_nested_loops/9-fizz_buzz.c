#include<stdio.h>

/**
 * main - print fiz buzz
 * @void: no argument
 *
 * Return: 0 success
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	printf("buzz");
	printf("\n");
	return (0);
}
