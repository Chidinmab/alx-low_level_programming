#include "main.h"
/**
 * char *_strcpy - program copies the string pointed to bysrc
 * @dest: copy to
 * @src: copy from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	while (*(src + c) != '\0')
	{
		c++;
	}
	for ( ; d < c ; d++)
	{
		dest[d] = src[d];
	}
	dest[c] = '\0';
	return (dest);
}
