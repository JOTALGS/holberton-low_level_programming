#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - check the code
 *
 * @s1: sdf
 * @s2: adsdff
 * @n: nejkj
 * Return: charabong.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        unsigned int len1, len2, lenc;
        char *new_str;
        int i = 0;
        int c = 0;

        if (!s1)
                s1 = "";
        if (!s2)
                s2 = "";

        len1 = strlen(s1);
        len2 = strlen(s2);
        if (n > len2)
                n = len2;
        lenc = len1 + n;
        new_str = malloc(sizeof(char) * (lenc + 1));

        for (i = 0; i < len1; i++)
                new_str[i] = s1[i];
        for (c = 0; c < n; c++)
        {
                i++;
                new_str[i] = s2[c];
        }
        new_str[i] = '\0';
        return (new_str);
}
