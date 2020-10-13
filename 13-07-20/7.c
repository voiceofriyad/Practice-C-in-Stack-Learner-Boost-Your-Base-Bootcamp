//Problem: Factorial

#include<stdio.h>
int main()
{
    int n, fac, i;
    fac = 1;
    scanf("%d", &n);

    if(n < 0)
       printf("Error!");

    else{
            for(i = 1; i <= n; i++){
            fac = fac * i;
        }
            printf("%d %d", n, fac);
    }

    return 0;
}
