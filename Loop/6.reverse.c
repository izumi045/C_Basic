//Program to reverse the number. Example 321 -&gt; 123, 1234 -&gt; 4321
#include <stdio.h>

int main() {
    printf("Name: Sandesh Shrestha\nRollno:16\nDescription:Reverse number\n");
    int num, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
