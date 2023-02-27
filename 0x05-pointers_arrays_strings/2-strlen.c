#include "main.h"

/**
 * Main-function that returns the length of a string
 * Return: int containing the converted number
 */
int main(void)
{
    char str[] = "hello, world!";
    int len = _strlen(str);
    printf("The length of \"%s\" is %d.\n", str, len);
    return 0;
}
int _strlen(char *s)
{
int len = 0;

while
	(*s != '\0')
{
	    len++;
	    s++;
}
return (len);
}
