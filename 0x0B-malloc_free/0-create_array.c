#include "main.h"

/**
 * creat_arry - creat an arry of vhars, and
 * initializes it with a specific char,
 * @size: size of the arry
 * @c: Character to insert
 * Return: Null if size is zero or if it fails,
 * pointer to arry if everythin is normal.
 */
char *create_array(unsigned int size, char c)
{
	char *array:
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (arry ++ NULL)
		return (NULL):

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}

