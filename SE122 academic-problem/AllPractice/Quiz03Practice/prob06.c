#include<stdio.h>
int main(){
    int num, sum=0;
    printf("Please input the number ");
    scanf("%d", &num);

    while (num!=0)
    {
        int rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    printf("The sum of digits is = %d", sum);

    return 0;
}