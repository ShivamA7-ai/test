#include <stdio.h>

int deposit(int acc_balance,int deposite_amount){
    if(deposite_amount <= 0){
        printf("Not valid. Enter valid deposit:\n");
    } else {
        acc_balance = acc_balance + deposite_amount;
        printf("Your account balance is: %d\n", acc_balance);
    }
    return acc_balance;
}

int withdraw(int acc_balance,int withdraw_amount){
    if(withdraw_amount <= 0 || withdraw_amount > acc_balance){
        printf("Enter a valid amount:\n");
    } else {
        acc_balance = acc_balance - withdraw_amount;
        printf("Your account balance is: %d\n", acc_balance);
    }
    return acc_balance;
}

int check_balance(int acc_balance){
    printf("The balance is: %d\n", acc_balance);
    return acc_balance;
}

int main(){
    int acc_balance=0;
    char service;
    printf("Choose service\n(1.deposit\n2.withdraw\n3.checkbalance): ");
    scanf(" %c", &service);

    switch(service){
        case '1': {
            int depo;
            printf("Enter the amount of deposit:\n");
            scanf("%d", &depo);
             acc_balance = deposit(acc_balance, depo);  
            break;
        }
        case '2': {
            int withdraw_amount;
            printf("Enter the withdraw amount:\n");
            scanf("%d", &withdraw_amount);
          acc_balance = withdraw(acc_balance, withdraw_amount);  
            break;
        }
        case '3': {
            acc_balance = check_balance(acc_balance);  
            break;
        }
        default:
            printf("Choose a valid service!\n");
            break;
    }
    return 0;
}