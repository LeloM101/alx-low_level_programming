#include "main.h"
#include <stdio.h>
/**
* print_array - printd n elements of an array of intergers
* @a: pointer of n
* @n: number of elements of the array
* Return: 0
*/
void print_array(int *a, int n)
{
int i = 0;
for (; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
