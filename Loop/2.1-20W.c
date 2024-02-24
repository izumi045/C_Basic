//Use a while loop to print even numbers up to 20.
#include <stdio.h>

int main() {
  printf("Name: Sandesh Shrestha\nRollno:16\nDescription:Using while loop to print even numbers.\n");
  int num = 2; // Start with the first even number

  while (num <= 20) {
    printf("%d ", num);
    num += 2; // Increment by 2 to get the next even number
  }

  printf("\n"); 

  return 0;
}
