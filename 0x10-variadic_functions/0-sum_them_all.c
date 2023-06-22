#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_all - Returns the sum of all paramters.
 * @n: number of paramters pass to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 *         Other - sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
