#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: an input string to search in
 * @neddle: an input string to locate in the string haystack
 * Return: a pointer to the beginning  of the located substring,
 * or NULL if the substring id not fou
 */

char *_strstr(char *haystack, char *neddle)
{
	char *startn = neddle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		neddle = startn;
		while (*haystack == *neddle)
		{
			haystack++;
			neddle;
		}

		if (*neddle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
