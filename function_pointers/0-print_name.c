#include "function_pointers.h"

/**
 * print_name - Imprime un nombre
 * @name: El nombre que se imprime
 * @f: El puntero a función
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

