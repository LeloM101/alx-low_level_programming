#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main - writes alphabets in reverse
*
* return: Always 0 (success)
*/

int main(void)
{
char low;

for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');

return (0);
}
