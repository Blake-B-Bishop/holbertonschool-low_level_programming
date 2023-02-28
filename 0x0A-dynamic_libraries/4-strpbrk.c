#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: string to search
 * @accept: bytes accepted
 * Return: Return pointer to first occurance of byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
