#include <unistd.h> 
 /**
  * main - Entery point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char *quote = "and that piece of art is useful\" -Dora Korpar, 2015-10-9\n";
	write(2, quote, 59);
	return (1);
}
