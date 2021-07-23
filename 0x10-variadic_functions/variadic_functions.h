#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct prints - typedef struct to a defined data type
 * @index: type of data type
 * @func: pointer to function that prints data types
 * according to their notation
 */

typedef struct prints
{
	char *index; /** specifiers **/
	void (*func)(va_list valist);
} prints_t;

void print_char(va_list valist);
void print_int(va_list valist);
void print_float(va_list valist);
void print_string(va_list valist);

#endif /*ifndef VARIADIC_FUNCTIONS_H */
