#include "main.h"

/**
 * _putchar - prints charater to standard output
 * @c: The character to print
 *
 * Return: 1 on success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
