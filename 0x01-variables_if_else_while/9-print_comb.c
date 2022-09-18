#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print out single digits followed by a space and comma digits of diffrent combinations.
*
* Return: Always 0 (success)
*/

int mai(void)
{
int m;

for (m = '0'; m <= '9'; m++)
{
putchar(m);
if (m != '9')
{
putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}
