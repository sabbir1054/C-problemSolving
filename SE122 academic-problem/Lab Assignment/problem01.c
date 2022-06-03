#include<stdio.h>
int main(){

    int num,sum=0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        sum = sum + i;
        printf("Number is %d \n", i);
    }

    printf("Total sum %d", sum);

    return 0;
}