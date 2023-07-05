#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - check the code
 * @s1: asd
 * @s2: adasfd
 * Return: Alwa.
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	ar = malloc(len1 + len2 + 1);
	for (i = 0; i <= len1; i++)
	{
		ar[i] = s1[i];
	}
	for (i = 0; i <= len2; i++)
	{
		ar[len1 + i] = s2[i];
	}
	ar[len1 + i + 1] = '\0';
	return (ar);
}
