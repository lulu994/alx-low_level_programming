#include "main.h"
#include <stdio.h>

/**
  *factorial - function that returns the factorial of a given number
  *@n: number to return the factorial from
  *If n is lower than 0, should return -1 to indicate an error
  *Factorial of 0 is 1
  *Return: factorial of n
  */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
