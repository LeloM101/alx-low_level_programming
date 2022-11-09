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
char *d = dest;
while (n--)
{
*dest = *src;
src++;
dest++;
}
return (dest);
}

