#include<stdio.h>
int main(){
    int num, sum = 0,avg;

    for (int i = 1; i <= 10; i++)
    {
        printf("Please Enter number%d = ", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    avg = sum / 10;

    printf("Total sum = %d\n", sum);
    printf("Average = %d", avg);

    return 0;
}