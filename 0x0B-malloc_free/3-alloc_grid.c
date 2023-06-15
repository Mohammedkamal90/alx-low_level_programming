#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
int **mee;
int z, y;
if (width <= 0 || height <= 0)
return (NULL);
mee = malloc(sizeof(int *) * height);
if (mee == NULL)
return (NULL);
for (z = 0; z < height; z++)
{
mee[z] = malloc(sizeof(int) * width);
if (mee[z] == NULL)
{
for (; z >= 0; z--)
free(mee[z]);
free(mee);
return (NULL);
}
}
for (z = 0; z < height; z++)
{
for (y = 0; y < width; y++)
mee[z][y] = 0;
}
return (mee);
}
