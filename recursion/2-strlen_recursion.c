#include "main.h"

/**
 * _strlen_recursion - Calcula el tamaño del string
 * @s: El string a contar
 *
 * Return: Valor del integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	
	s++;
	return (_strlen_recursion(s) + 1);
}

