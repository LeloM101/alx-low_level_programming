#include "main.h"
/**
* print_line - prints straight line
* @n: number of times to print underscore
* Return: always 0
*/
void print_line(int n)
{
int j;
if (n > 0)
{
for (j = 0; j < n; j++)
_putchar('_');
}
_putchar('\n');
}
