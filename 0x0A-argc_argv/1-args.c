#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0 > success, non zero > failed
 */

int main(int argc, char *argv[])

{

(void) argv; 
printf("%d\n", argc - 1);

return (0);
}
