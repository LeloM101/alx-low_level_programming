#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Entry point
*
*Return: Always 0 (success)
*/

int main(void)
{
char low;
char e;
char q;

e = 'e';
q = 'q';

for (low = 'a'; low <= 'z'; ++low)
{
if (low != q && low != e)
putchar(low);
}
putchar('\n');

return (0);
}
