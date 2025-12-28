#include <stdio.h>


void deposit(float *balance, float amount);
void withdraw(float *balance, float amount);
void checkBalance(float balance);

int main() {
    float balance = 0.0, amount;
    int choice;

    while (1) {
        printf("\n==== Simple Banking System ====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&balance, amount);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&balance, amount);
                break;

            case 3:
                checkBalance(balance);
                break;

            case 4:
                printf("Exiting... Thank you!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}


void deposit(float *balance, float amount) {
    if (amount > 0) {
        *balance += amount;
        printf("Deposited: %.2f\n", amount);
    } else {
        printf("Invalid deposit amount!\n");
    }
}


void withdraw(float *balance, float amount) {
    if (amount <= 0) {
        printf("Invalid withdrawal amount!\n");
    } else if (amount > *balance) {
        printf("Insufficient balance!\n");
    } else {
        *balance -= amount;
        printf("Withdrawn: %.2f\n", amount);
    }
}


void checkBalance(float balance) {
    printf("Current Balance: %.2f\n", balance);
}