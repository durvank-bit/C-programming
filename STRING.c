#include <stdio.h>

int main(void) {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf(" %99[^\n]", str);

    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}