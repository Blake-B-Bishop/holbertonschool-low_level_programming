#include "main.h"

/**
 * _isalpha - Checks for alphabetic
 * @c: Character
 * Return: 1 for alphabetic or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}