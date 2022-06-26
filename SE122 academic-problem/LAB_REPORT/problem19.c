#include<stdio.h>
int main(){
    int num;
    printf("Please input the  term :");
    scanf("%d", &num);
    float sum = 0;
    for (float i = 1; i < num; i++)
    {
        sum = sum + (1 / i);

    }

    printf("%.2f", sum);

    return 0;
}