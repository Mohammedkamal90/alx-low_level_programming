#include <unistd.h>

/*
*_putchar - writes the character c
*C: the character to print
*return: success 1
*error, -1 is returned

*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
