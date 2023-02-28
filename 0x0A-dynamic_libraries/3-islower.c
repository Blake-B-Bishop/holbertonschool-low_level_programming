#include "main.h"


/**
 * _islower - Checks for lowercase
 * @c: Character
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
