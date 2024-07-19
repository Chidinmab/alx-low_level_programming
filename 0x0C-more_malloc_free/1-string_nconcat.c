#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenates from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int c = 0, d = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (c < len1)
	{
		s[c] = s1[c];
		c++;
	}

	while (n < len2 && c < (len1 + n))
		s[c++] = s2[d++];
	while (n >= len2 && c < (len1 + len2))
		s[c++] = s2[d++];

	s[c] = '\0';

	return (s);
}
