//Problem:  Fizz-Buzz problem

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if(a%3 == 0 && a%5 == 0){
        printf("Fizz-Buzz");
    }
    else if(a%3 == 0){
        printf("Fizz");
    }
    else if(a%5 == 0){
        printf("Buzz");
    }


    return 0;
}
