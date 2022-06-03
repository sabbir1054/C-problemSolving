#include<stdio.h>
int main(){
    int given_num,factorial=1;
    printf("Please input your number = ");
    scanf("%d", &given_num);

    for (int i = 1; i <=given_num; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial is = %d", factorial);

    return 0;
}