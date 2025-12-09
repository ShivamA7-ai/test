
#include <stdio.h>

void fibbonacci(int n);

int main(void){
    int n;
    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1) return 1;

    printf("fibbonacci series: ");
    fibbonacci(n);
    printf("\n");
    return 0;
}

void fibbonacci(int n){
    int t1 = 0, t2 = 1, nextterm;
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            nextterm = i;
        else {
            nextterm = t1 + t2;
            t1 = t2;
            t2 = nextterm;
        }
        printf("%d ", nextterm);  
    }
}
