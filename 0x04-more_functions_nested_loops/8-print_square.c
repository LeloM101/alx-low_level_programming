#include "main.h"
/**
* print_square - prints straight line
* @size: length times bredth of square
* Return: always 0
*/
void print_square(int size)
{
int j, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (j = 0; j < size; j++)
{
for (k = 0; k < size; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
