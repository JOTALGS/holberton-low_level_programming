#include "main.h"

/**
 * *_strchr - check the code
 * @s: adas
 * @c: ajsdja
 *
 * Return: pointer to char.
 */
char *_strchr(char *s, char c)
{
	int i;

	if (c == '\0')
	{
		return (0);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
