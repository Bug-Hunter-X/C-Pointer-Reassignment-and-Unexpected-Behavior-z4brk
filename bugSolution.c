/*
This code does not "fix" the bug, but rather demonstrates the expected behavior and clarifies the concept.
*/
#include <stdio.h>
int main() {
  int x = 10;
  int *ptr = &x;
  *ptr = 20;
  printf("Value of x after modification through ptr: %d\n", x); // Outputs 20

  int y = 30;
  ptr = &y; // ptr now points to y
  *ptr = 40; // Modifies the value of y
  printf("Value of x after modifying y through ptr: %d\n", x); // Still outputs 20 (x remains unchanged)
  printf("Value of y after modification: %d\n", y); // Outputs 40

  //To modify x after ptr has been reassigned to point to y, you would need to use the original pointer.
  ptr = &x; // ptr now points to x again
  *ptr = 50; // Modifies x
  printf("Value of x after reassignment of ptr: %d\n", x); //Outputs 50

  return 0;
}