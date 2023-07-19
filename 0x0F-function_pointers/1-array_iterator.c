#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Execute a given function on each element of the array.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
