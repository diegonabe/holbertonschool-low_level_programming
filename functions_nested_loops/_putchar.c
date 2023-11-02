#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: the char to print
 * Return: On Succes 1.
 * On error -1 is returned, and errno is set apropiately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

