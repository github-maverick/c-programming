#include <stdio.h>
int print_big(int number); // function should be declared before use
int main() {
  int array[] = { 1, 11, 2, 22, 3, 33 };
  int i;
  for (i = 0; i < 6; i++) {
    print_big(array[i]);
  }
  return 0;
}

/* write your function here */
int print_big(int number) {
if (number>10)
    printf("%d is big\n", number);
}
