#include <stdio.h>
#include <string.h>
#include <main.h>

char *_strncat(char *dest, char *src, int n) {
    strncat(dest, src, n);
    return dest;
}

int main() {
    char str1[50] = "Hello, ";
    char str2[50] = "world!";
    printf("Before concatenation: %s\n", str1);
    _strncat(str1, str2, 3);
    printf("After concatenation: %s\n", str1);
    return 0;
}

