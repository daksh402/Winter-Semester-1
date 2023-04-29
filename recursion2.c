#include <stdio.h>

int power(int x, int n);

int main() {
    int x, n, result;

    printf("Enter a number x: ");
    scanf("%d", &x);

    printf("Enter a number n (less than or equal to 5): ");
    scanf("%d", &n);

    result = power(x, n);

    printf("%d to the power of %d is: %d\n", x, n, result);

    return 0;
}

int power(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * power(x, n-1);
    }
}