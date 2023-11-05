#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Esta función busca un integer
 * @array: array
 * @size: tamaño
 * @cmp: puntero
 *
 * Return: Resultado
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}

	return (-1);
}

