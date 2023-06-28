#include "main.h"

unsigned int
_strspn(char *s, char *accept)
{
	int i;
	int y;
	unsigned int ct;
	int conf = 0;

	ct = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[y] == accept[i])
			{
				conf = 1;
				break;
			}
		}
		if (conf)
		{
			ct++;
		}
		else
		{
			break;
		}
	}
	return (ct);
}
