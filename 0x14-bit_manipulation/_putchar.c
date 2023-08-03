#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: character to print
 * Return:Success 1.
 * error, -1 is return, and error set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
