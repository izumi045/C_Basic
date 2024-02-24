/*Use a do-while loop to check if a user&#39;s input is an even number, prompting them to re-enter if
not.*/
#include <stdio.h>
int main()
{
    printf("Name: Sandesh Shrestha\nRollno:16\nDescription:Checking even number.\n");
    int num;
    
    do{
        printf("Enter any number: ");
        scanf("%d", &num);

    }while (num % 2 !=0 );
    printf("You entered an even number: %d\n", num);

    return 0;
}