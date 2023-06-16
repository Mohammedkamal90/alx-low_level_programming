#include "main.h"
#include <stdio.h>

/*
 *string_concat - two strings
 *s1: pointer to frist string
 *s2: pointer two scoend string
 *n: number of byts
 *return: pointer to space in memory
 */

char *string_concat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, s1_length, s2_length;
/* check if string passed is null */
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 == "";
/*compute the length of strings  */

for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
	;

for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
	;

/*memory reserving for 1&2*/

str = malloc(s1_length + n + 1);
if (str == NULL)
{
	return (NULL);
}
/*copy first string  */
for (i = 0; s1[i] != '\0'; i++)
	str[i] = s1[i];
/*copy second string  */
for (j = 0; j < n; j++)
{
	str[i] = s2[j];
	i++;
}
str[i] = '\0';
return (str);
}
