#include "main.h"
#include <stdlib.h>

char *str_concat(char *a1, char *a2)
{
char *conct;
int i, ci;
if (a1 == NULL)
a1 = "";
if (a2 == NULL)
a2 = "";
i = ci = 0;
while (a1[i] != '\0')
i++;
while (a2[ci] != '\0')
ci++;
conct = malloc(sizeof(char) * (i + ci + 1));
if (conct == NULL)
return (NULL);
i = ci = 0;
while (a1[i] != '\0')
{
conct[i] = a1[i];
i++;
}
while (a2[ci] != '\0')
{
conct[i] = a2[ci];
i++, ci++;
}
conct[i] = '\0';
return (conct);
}
