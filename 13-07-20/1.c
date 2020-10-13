//Problem:Swap

#include <stdio.h>
int main()
{
    int a, b, temp;
    a = 5, b = 10;

    temp = a;
    a = b;
    b = temp;

    printf("A = %d, B = %d", a, b);
    return 0;
}
