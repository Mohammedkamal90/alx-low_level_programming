#include "main.h"
#include <stdlib.h>

char *argstostr(int at, char **bv)
{
int i, n, r = 0, l = 0;
char *str;
if (at == 0 || bv == NULL)
return (NULL);
for (i = 0; i < at; i++)
{
for (n = 0; bv[i][n]; n++)
l++;
}
l += at;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
for (i = 0; i < at; i++)
{
for (n = 0; bv[i][n]; n++)
{
str[r] = bv[i][n];
r++;
}
if (str[r] == '\0')
{
str[r++] = '\n';
}
}
return (str);
}
