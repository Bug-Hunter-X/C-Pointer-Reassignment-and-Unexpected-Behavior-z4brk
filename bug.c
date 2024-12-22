int main() {
  int x = 10;
  int *ptr = &x;
  *ptr = 20;
  printf("%d", x); // Outputs 20

  int y = 30;
  ptr = &y;
  *ptr = 40; 
  printf("%d", x); // Still Outputs 20, this might be unexpected if the user was hoping to change the value of x
  return 0; 
}