#include <stdio.h>
#include "main.h"

/**
  *_atoi - converts a string to an integer
  *@s: string to be converted
  * Return: the int converted from the string
  */
int _atoi(char *s)
{
	int i, l, m, len, b, digit;

	i = 0;
	l = 0;
	m = 0;
	len = 0;
	b = 0;
	digit = 0;

	while (s[len] != '\0')
		   len++;

	while (i < len && b == 0)
	{
		if (s[i] == '-')
			++l;
		{
		if (s[i] >= '0' && s[i] <= '9')
			digit = s[i] - '0';
		if (l % 2)
			digit = -digit;
			m = m * 10 + digit;
			b = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			b = 0;
		}
		i++;
	}
	if (b == 0)
		      return (0);
	       return (m);
}
/**
  * main - multiplies two numbers
  *@argc: number of arguments
  *@argv: array of arguments
  *Return: 0 (Success), 1 (Error)
  */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	 if (argc < 3 || argc > 3)
	 {
		  printf("Error\n");
		  return (1);
	 }
	 num1 = _atoi(argv[1]);
	  num2 = _atoi(argv[2]);
	  result = num1 * num2;
	    printf("%d\n", result);
	     return (0);
}
