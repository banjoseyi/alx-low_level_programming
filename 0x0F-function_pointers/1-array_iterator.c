#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_interatorr - executes a function given as a parameter
 * on each element of an array
 * @aray: array to iterator over
 * @size: size of the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*actoin)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	
	for (i = 0; i < size; i++)
		action(array[i]);
}

