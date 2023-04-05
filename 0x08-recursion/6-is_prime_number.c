#include "main.h"
#include <stdio.h>

int is_prime_number_helper(int n, int i);

/**
  *is_prime_number - says if an integer is a prime number
  *@n: number to be checked
  *Return: 1 if n is a prime number, 0 if not
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_helper(n, 2));
	}
}

/**
  *is_prime_number_helper - calculates if a number is prime recursively
  *@n: number to be checked
  *@i: iterator
  *Return: 1 if n is prime, 0 if not
  */
int is_prime_number_helper(int n, int i)
{
	if (i >= n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_helper(n, i + 1));
	}
}
