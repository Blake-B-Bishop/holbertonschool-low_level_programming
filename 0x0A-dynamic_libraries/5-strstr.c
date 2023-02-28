#include "main.h"

/**
 * _strstr - find first occurance of given string in another string
 * @haystack: string to search through
 * @needle: string to search for
 * Return: pointer to beginning of lcoated string
 */

char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *search;

	while (*haystack != '\0')
	{
		start = haystack;
		search = needle;
		while (*search == *haystack && *haystack != 0
				&& *search != 0)
		{
			haystack++;
			search++;
		}
		if (*search == 0)
			return (start);
		haystack = start + 1;
	}
	return (0);
}
