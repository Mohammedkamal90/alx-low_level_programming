#include "main.h"

/**
 * get_bit - returns value of bit at index in decimal number
 * @index: index of bit
 * @n: number to search
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
