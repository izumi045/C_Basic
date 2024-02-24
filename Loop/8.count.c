//Write a program to count the digits in a number.

#include <stdio.h>

int main() {
    printf("Name: Sandesh Shrestha\nRollno:16\nDescription:Count the digit.\n");

    long long int num; // Use long long to handle large numbers

    printf("Enter an integer: ");
    scanf("%lld", &num);

    int count = 0;

    // Handle negative numbers correctly
    if (num < 0) {
        num = -num; // Convert to positive
        count++; // Add 1 for the sign digit
    }

    // Efficiently count digits using a loop
    while (num != 0) {
        num /= 10;
        count++;
    }

    printf("The number of digits in %lld is: %d\n", num, count);

    return 0;
}
