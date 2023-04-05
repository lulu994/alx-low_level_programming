#include "main.h"

/**
  *wildcmp -  function that compares two strings s1 and s2
  *@s1: pointer to string params
  *@s2: pointer to string params
  *
  * Return: 0
  */
int wildcmp(char *s1, char *s2)
{

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		else if (*s1 == '\0')
		{
			return (0);
		}
		else
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == '\0' || *s2 == '\0')
	{
		return (*s1 == *s2);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}

