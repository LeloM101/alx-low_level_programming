#include "main.h"
/**
* memcpy - copies @n bytes from the memory area pointed
* @dest:destination to be copied to
* @src: source of bytes to be copied
* @n: number of bytes to be copied to dest
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
unsigned char *d = dest;
const unsigned char *s = src;
for (i = 0; i < n; i++)
d[i] = s[i];
return (dest);
}
