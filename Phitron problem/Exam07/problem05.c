#include<stdio.h>
int  main(){
    int num,d,sum=0;
    scanf("%d", &num);
    for (int i = 0; i < 5; i++)
    {
        d = num % 10;
        num = num / 10;
        sum = sum + d;
    }

    printf("%d", sum);

    return 0;
}