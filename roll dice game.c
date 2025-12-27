#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int roll;
    int score = 0;
    char choice = 'r';

    // Seed the random number generator
    srand(time(NULL));

    printf("Welcome to the Dice Rolling Game!\n");
    printf("Roll the dice to earn points.\n");
    printf("If you roll a 1, the game ends.\n\n");

    while (choice == 'r' || choice == 'R') {
        roll = rand() % 6 + 1;  // Generate number between 1 and 6
        printf("You rolled: %d\n", roll);

        if (roll == 1) {
            printf("Oops! You rolled a 1. Game over.\n");
            break;
        }

        score += roll;
        printf("Current score: %d\n", score);

        printf("Press 'r' to roll again or 's' to stop: ");
        scanf(" %c", &choice);
        printf("\n");
    }

    printf("Final score: %d\n", score);
    printf("Thanks for playing!\n");

    return 0;
}
