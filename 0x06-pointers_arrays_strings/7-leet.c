#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string
 * Return: string array
 */

char *leet(char *s)
{
	char a[5] = {'A', 'E', 'O', 'T', 'L'};
	char b[5] = {'4', '3', '0', '7', '1'};
	int count1 = 0, count2 = 0;

	while (s[count1])
	{
		count2 = 0;

		while (count2 < 5)
		{
			if (s[count1] == a[count2] || s[count1] - 32 == a[count2])
			{
				s[count1] = b[count2];
			}

			count2++;
		}

		count1++;
	}
	return (s);
}

