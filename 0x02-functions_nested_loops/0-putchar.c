#include "main.h"
#include "unistd.h"
/**
 * main - print _putchar, followed by new line
 * Return: 0
 */
int main(void);
{
#include <unistd.h>
int _putchar(char c)
{
return (write(1, &c, 1));
}
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);
}
