#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @s: s
 * @accept: sd
 * Return: bla
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int y;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[i] == accept[y])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
