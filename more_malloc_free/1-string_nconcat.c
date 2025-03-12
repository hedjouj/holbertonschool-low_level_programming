#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n characters from s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of characters to take from s2
 *
 * Return: A pointer to the newly allocated memory containing s1 + s2 (up to n)
 *         or NULL if memory allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        unsigned int i, len, j;
        unsigned int size;
        char *nstr;


        len = 0;

        if (s1 == NULL)
        {
                s1 = "";
        }
        if (s2 == NULL)
        {
                s2 = "";
        }
        while (s1 && s2[len] != '\0')
        {
                len++;
        }
        size = (len + n) * sizeof(*nstr);

        nstr = malloc(size + 1);

        if (nstr == NULL)
        {
                return (NULL);
        }

        i = 0;

        while (i < size && size && s1[i] != '\0')
        {
                nstr[i] = s2[j];
                i++;
                j++;
        }

        nstr[i] = '\0';

        return (nstr);
}
