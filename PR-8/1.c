#include <stdio.h>
#include<string.h>

void main() {
    char str[100];
    char *ptr;

    printf("Enter any string: ");
    gets(str);

    ptr = str;

    while (*ptr != '\0') {
        ptr++;
    }

    printf("The length of a string is: %d\n", (ptr - str));

}
