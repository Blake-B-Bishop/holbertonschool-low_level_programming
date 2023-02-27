#include <unistd.h>

/**
 * _putchar - Writes C to stdout
 * @c: Printed character
 *
 * Return: Success 1.
 * On error, -1 return, and errno is set
 */
int _puthcar(char c)
{
	return(write(1, &c, 1));
}
