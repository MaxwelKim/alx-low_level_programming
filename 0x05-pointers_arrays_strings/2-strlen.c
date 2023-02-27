#include "main.h"

/**
 * function that returns the length of a string
 * Return: int containing the converted number
 */
int _strlen(char *s)
{
    int len = 0;
    while (*s != '\0')
    {
	    len++;
	    s++;
    }
    return (len);
}
