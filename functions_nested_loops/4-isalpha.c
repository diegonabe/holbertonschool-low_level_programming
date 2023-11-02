#include "main.h"

/**
 * _isalpha - Check del caracter alfabético
 * @c: El caracter a ser chequeado
 * Return: 1 por cada caracter alfabético o 0 para todo lo demás
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

