#include <unistd.h>

/**
 * Este es el putchar.c
 */
int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}

