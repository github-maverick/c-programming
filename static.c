#include<stdio.h>
int runner()
{
    static int count = 0; //static variable not global
    count++;
    return count;
}

int main()
{
    printf("%d ", runner());
    printf("%d ", runner());
    return 0;
}
