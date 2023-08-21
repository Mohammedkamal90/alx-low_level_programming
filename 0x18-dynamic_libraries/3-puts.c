#include "main.h"

/**
 * _puts - Print String, to follow new line, stdout
 * @str: String  prints
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
