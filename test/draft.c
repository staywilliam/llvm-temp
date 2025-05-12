#include <stdio.h>

int main(int argc, char *argv[]) {
  int a = 0;
  for (int i=0; i < 10; i++) {
    a += i;
  }
  printf("Sum of first 10 integers is: %d\n", a);
  return 0;
}
