#include <stdio.h>

void reverse_array(int arr[], int n);
void print_array(int arr[], int n);

int main() {
    int marks[] = {85, 80, 50, 88, 90};
    reverse_array(marks, 5);
    print_array(marks, 5);
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
