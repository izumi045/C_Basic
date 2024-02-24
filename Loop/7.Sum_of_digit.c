//Write a program to get the sum of digits in a number. Example 12345, sum=1+2+3+4+5=15.

#include <stdio.h>

int main() {
    printf("Name: Sandesh Shrestha\nRollno:16\nDescription:Sum of digit.\n");
    int num, sum = 0, reminder;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Keep dividing until the number is not zero
    while (num != 0) {
        reminder = num % 10; // Extract the last digit
        sum = sum + reminder; // Add the last digit to the sum
        num = num / 10; // Remove the last digit from the number
    }

    printf("Sum of digits of the number is %d\n", sum);

    return 0;
}
