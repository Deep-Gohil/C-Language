#include <stdio.h>
#include <string.h>

int len_string(char str[]) {
    int count = 0;
    for (count = 0; str[count] != '\0'; count++);
    return count;
}

int main() {
    char str[100];
    printf("Enter any string: ");
    gets(str);

    int len = len_string(str);
    printf("Length is: %d\n", len);

    return 0;
}
