//Create a for loop to print the multiplication table of a given number.
#include<stdio.h>
int main()
{
    printf("Name: Sandesh Shrestha\nRollno:16\nDescription:Multiplication table.\n");
    int num, i;

    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Multiplication table of %d is: \n", num);

    for(i=1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }
    printf("\n");
    return 0;
}
