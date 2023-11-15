#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct format - printf converter
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int print_pointer(va_list val);
int print_unsigned(va_list args);
int print_hx_xtra(unsigned long int num);
int _strlenc(const char *s);
int print_extra_hex(unsigned int num);
int print_x_str(va_list val);
int print_hex(va_list val);
int print_hx(va_list val);
int print_oct(va_list val);
int print_bi(va_list val);
int str_rev(va_list args);
int print_rot(va_list args);
int print_i(va_list args);
int print_d(va_list args);
int _strlen(char *s);
int rev_string(char *s);
int print_per(void);
int print_char(va_list val);
int print_s(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
