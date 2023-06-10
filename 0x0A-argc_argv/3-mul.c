#include <stdio.h>
#include <stdlib.h>

/**
 * main-print sum of arguments
 * @argc:number of arguments
 * @argv:pointer to array of arguments
 * Return:0-success
 */

int main(int argcm char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum - atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\m");
		return (1);
	}
	return(0);
}
