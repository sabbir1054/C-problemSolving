#include<stdio.h>
int main(){
    int num, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Please Input number %d :", i+1);
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("Sum is = %d", sum);
    return 0;
}