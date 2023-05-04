#include "main.h"

/**
  *print_binary - prints the binary representation of a number
  *without the use of arrays, malloc, % or / operators
  *@n: decimal number to be converted to binary and printed
  */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
