
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    char password[50];
    bool hasDigit = false, hasChar = false, hasSpecial = false;
    int length;

    printf("Enter your password: ");
    scanf("%49s", password);

    length = strlen(password);

    if (length < 6 || length > 12) {
        printf("Invalid password! Password length must be between 6 and 12 characters.\n");
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (isdigit((unsigned char)password[i]))
            hasDigit = true;
        else if (isalpha((unsigned char)password[i]))   
            hasChar = true;
        else if (password[i] == '@' || password[i] == '$' || password[i] == '#')
            hasSpecial = true;
    }

    if (hasDigit && hasChar && hasSpecial) {
        printf("Password accepted successfully!\n");
    } else {
        printf("Invalid password! It must contain at least one letter, one digit, and one special symbol (@, $, #).\n");
    }

    return 0;
}
