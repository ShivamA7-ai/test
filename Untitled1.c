#include <stdio.h>



int main() {
    printf("hello world")
    return 0;
}

void reverse_array(int arr[], int n) {
    for(int i = 0; i < n/2; i++) {      // Corrected: i = 0
        int firstvalue = arr[i];
        int secondvalue = arr[n - i - 1];  // Corrected spelling

        arr[i] = secondvalue;
        arr[n - i - 1] = firstvalue;
    }
}

void print_array(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
