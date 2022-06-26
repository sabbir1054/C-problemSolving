#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Please Input your last number : ");
    scanf("%d", &num);

   sum = (num * (num + 1)) / 2;

    printf("Sum of series = %d", sum);

    return 0;
}