#include "main.h"

/**
* _memset - fill a block of memory with a constant byte
* @n: number of byte to be filled intomemory area
* @b: constant byte
* @s: the pointer
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
char *start = s;
while (n--)
{
*s = b;
s++;
}
return (start);
}
