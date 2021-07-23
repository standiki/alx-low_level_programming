#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - function that prints character
 * @valist: argument list pointer to character to be printed
 */

void print_char(va_list valist)
{
	char character;

	character = va_arg(valist, int);
	printf("%c", character);
}

/**
 * print_int - function that prints integer
 * @valist: argument list pointer to integer to be printed
 */

void print_int(va_list valist)
{
	int num_i;

	num_i = va_arg(valist, int);
	printf("%i", num_i);
}

/**
 * print_float - function that prints a float
 * @valist: argument list pointer to float to be printed
 */

void print_float(va_list valist)
{
	float num_f;

	num_f = va_arg(valist, double);
	printf("%f", num_f);
}

/**
 * print_string - function that prints string
 * @valist: argument list pointer to string to be printed
 */

void print_string(va_list valist)
{
	char *str;

	str = va_arg(valist, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: number of arguments
 * Return: none
 */

void print_all(const char * const format, ...)
{
	va_list arguments;
	int nIndex, arg_len;
	char *separator = "";

	prints_t fmt_list[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(arguments, format);
	nIndex = 0;
	while (format && (*(format + nIndex)))
	{
		arg_len = 0;
		while (arg_len < 4 && (*(format + nIndex) != *(fmt_list[arg_len].index)))
		{
			arg_len++;
		}
		if (arg_len < 4)
		{
			printf("%s", separator);
			fmt_list[arg_len].func(arguments);
			separator = ", ";
		}
		nIndex++;
	}
	printf("\n");
	va_end(arguments);
}
