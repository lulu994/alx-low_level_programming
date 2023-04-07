#include "main.h"

/**
  *_strstr - Entry point
  *@haystack: inpu
  *@needle: input
  *
  * Return: Always 0
  */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *d = needle;

		while (*h == *d && *d != '\0')
		{
			h++;
			d++;
		}
		if (*d == '\0')
			return (haystack);
	}
	return (0);
}
