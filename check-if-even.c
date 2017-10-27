/*#include<stdio.h>
int main() {
int n = 0;
while (n < 10) {
    n++;

	//check that n is odd
    if (n % 2 == 1) {
        //go back to the start of the while block
        continue;
    }

    // we reach this code only if n is even
    printf("The number %d is even.\n", n);
}
}
*/
// OR, In the easy way--
#include<stdio.h>
int main() {
int n = 0;
while (n < 10) {
    n++;

    if (n % 2 == 0) {
    printf("The number %d is even.\n", n);
}
}
}
