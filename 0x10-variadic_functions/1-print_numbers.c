#include <stdarg.h>
#include <stdio.h>
/*
 *main - function that prints numbers
 *Return: 0 is success
 **/

int main(void)
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);
for (unsigned int i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
return (0);
}

