#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int b = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;
do {
b++;
dest[i] = src[b];
i++;
} while (src[b] != '\0');
return (dest);
}
