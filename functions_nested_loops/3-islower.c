#include "main.h"

/**
 * _islower - Revisa el char lowercase
 * @c: El char a ser revisado
 * Return: 1 para char lowercase y 0 para todo lo demás.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

