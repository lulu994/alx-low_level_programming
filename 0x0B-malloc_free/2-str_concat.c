#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *str_concat - function that concatenates two strings
  *@s1: input one to concat
  *@s2: input two to concat
  *
  * Return: concat of s1 and s2
  */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, v;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = v = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[v] != '\0')
		v++;
	conct = malloc(sizeof(char) * (i + v + 1));

	if (conct == NULL)
		return (NULL);
	i = v = 0;

	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[v] != '\0')
	{
		conct[i] = s2[v];
		i++, v++;
	}
	conct[i] = '\0';
	return (conct);
}
