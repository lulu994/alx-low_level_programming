#include <stdio.h>

/**
 *main - Entry point
  *Description: prints the alphabet in lowercase, and then in uppercase
  *Return: Always 0 (Success)
  */
int main(void)
{
	int n = 97;
	int m = 56;

	while (n <= 122)
	{
		putchar(n);
	}
	while (m <= 90)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
