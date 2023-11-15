#include "main.h"

/**
 * print_char - prints char.
 * @val: value.
 * Return: inte.
 */
int print_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
