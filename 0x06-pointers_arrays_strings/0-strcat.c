#include <stdio.h>
#include <string.h>
#include <main.h>

char *_strcat(char *dest, char *src) {
    strcat(dest, src);
    return dest;
}

int main() {
    char str1[50] = "Hello, ";
    char str2[50] = "world!";
    printf("Before concatenation: %s\n", str1);
    _strcat(str1, str2);
    printf("After concatenation: %s\n", str1);
    return 0;
}

