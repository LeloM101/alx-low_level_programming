#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int d; int e
for (d = 0; d < 10; d++)
{
for (e = 0; e < 10; e++)
{
putchar((d % 10) + '0');
putchar((e % 10) + '0');
if (d == 9 && e ==9)
continue;
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
