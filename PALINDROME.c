#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int len, is_palindrome = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("%s is a Palindrome.\n", str);
    } else {
        printf("%s is NOT a Palindrome.\n", str);
    }

    return 0;
}