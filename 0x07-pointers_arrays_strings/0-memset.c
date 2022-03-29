#include "main.h"

/**
 * _memset - fills string with constant char b upto n bytes
 * @s: input pointer to string
 * @b: constant char
 * @n: number of bytes
 * Return: pointer to s string
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	/*Delacring FOR*/
	for (i = 0; i < n; i++)
	{
	*(s + i) = b; /*add 1 position s*/

	} /*END FOR*/

	return (s);
}
