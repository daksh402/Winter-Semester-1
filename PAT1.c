/*
PAT1
Write a C program to check whether a number is prime, armstrong, perfect number or not using functions.

Input:

11
Output:

11 is prime number
11 is not a armstrong number
11 is not a perfect number
*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool isArmstrong(int num) {
    int sum = 0;
    int temp = num;
    int digits = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    return (num == sum);
}

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (num == sum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    if (isArmstrong(num)) {
        printf("%d is a armstrong number\n", num);
    } else {
        printf("%d is not a armstrong number\n", num);
    }

    if (isPerfect(num)) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }

    return 0;
}
