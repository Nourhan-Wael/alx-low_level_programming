 #include "main.h"
#include <stdlib.h>
/**
 * free_grid - Entry point
 * @grid: a parameter
 * @height: a parameter
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}





