#include "main.h"
#include <stdio.h>

/**
  * _strlen_recursion - function that returns the length of a string
  *@s: the length  measured
  *
  *Return: The length of the string
  */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
