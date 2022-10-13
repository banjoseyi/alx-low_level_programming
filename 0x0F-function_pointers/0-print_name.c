
#include <stdlb.h>
#include "functoin_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(chzr *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

