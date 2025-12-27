#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("Entered character is a digit.\n");
    } else {
        printf("Entered character is not a digit.\n");
    }

    return 0;
}

