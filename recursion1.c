#include <stdio.h>

int iterations = 0;

void divide(int arr[], int left, int right);

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    divide(arr, 0, n-1);

    printf("Number of iterations: %d\n", iterations);

    return 0;
}

void divide(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        divide(arr, left, mid);
        divide(arr, mid+1, right);
    }
    iterations++;
}