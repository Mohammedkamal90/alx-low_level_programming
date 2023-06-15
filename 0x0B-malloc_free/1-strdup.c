#include <stdio.h>
#include <stdlib.h>
#include "main.h"


char *_strdup(char *str)
{
char *aa;
int i, r = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
aa = malloc(sizeof(char) * (i + 1));
if (aa == NULL)
return (NULL);
for (r = 0; str[r]; r++)
aa[r] = str[r];
return (aa);
}
