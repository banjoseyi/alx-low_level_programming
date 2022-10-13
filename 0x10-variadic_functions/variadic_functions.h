#ifndef _VARIADIC_FUNCTION_H_
#define _VARIADIC_FUNCTION_H_

#include <stdarg.h>
/**
 * struct print - print type with conrresponging print function
 * @t: print type
 * @f: print functoin
 */
typedef struct print
{
	char *t;
	void (*F)(va_list);
} print_t;

int _putchar(Char);
int sum_them_all(const unsigned int n, ..);
void print_numbers(const char *separator, const unsiged int n, ...)
void print_strings(const char *separator, const unsiged int n, ...)
void print_all(const char * consnt format ...)

#endif /*_VARIADIC_FUNCRINS_H_*/

