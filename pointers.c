#include <stdio.h>
int main() {
// define a local variable a
int a = 1;

//define a pointer variable, and point it to a using the & operator
int * pointer_to_a = &a;

// let's change the variable a
a ++;

// we just changed the variable a again!
(*pointer_to_a) ++; // *pointer_to_a ++ doesn't work

// will print out 3
printf("The value of a is now %d.\n", a);
}
