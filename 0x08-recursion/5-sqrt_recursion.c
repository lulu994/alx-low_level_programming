#include "main.h"
#include <stdio.h>

int _sqrt_helper(int n, int i);
/**
  * _sqrt_recursion - returns the natural square root of a number.
  *If n does not have a natural square root, return -1
  *@n: number to calculate the square root
  *Return: the resulting square root
  */
int _sqrt_recursion(int n)

{
	return (_sqrt_helper(n, 1));
}

/**
  *_sqrt_helper - recurses to find the natural square root of a number
  *@n: number to calculate the square root
  *@i: iterator
  *
  * Return: result of the recursive call or the natural square root of n
  */
int _sqrt_helper(int n, int i)
{

	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}
