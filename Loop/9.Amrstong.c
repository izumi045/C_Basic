/*Write a program to find if the number is Armstrong or not. Example: 1634 (1^4 + 6^4 + 3^4 +
4^4 = 1 + 1296 + 81 + 256 = 1634)*/

#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a given number
int countDigits(int num) {
    printf("Name: Sandesh Shrestha\nRollno:16\nDescription:Armstrong.\n");

    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int n = countDigits(num);
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is Armstrong or not
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

