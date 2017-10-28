#include <stdio.h>

int main() {
    void addone(int * n) {
        (*n)++;
    }
    
    int n;
    printf("Before: %d\n", n);
    addone(&n);
    printf("After: %d\n", n);
    

return 0;
}
