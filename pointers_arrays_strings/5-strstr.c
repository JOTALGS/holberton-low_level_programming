#include "main.h"

/**
 * *_strstr - nnjgg
 * @haystack: sasd
 * @needle: asd
 * Return: asd.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int h;

	if (needle[0] == '\0')
		return (&haystack[0]);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (h = 0; needle[h] != '\0'; h++)
		{
			if (haystack[i] == needle[h])
			{
				while (1)
				{
					if (needle[h] == '\0')
						return (&haystack[0]);
					if (needle[h++] != haystack[i++])
						break;
				}
			}
		}
	}
	return ('\0');
}
