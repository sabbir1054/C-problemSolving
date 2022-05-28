#include<stdio.h>
int main(){
    int num, fibo0=0,fibo1=1,temp;
    
     temp = fibo0 + fibo1;
    printf("Please input your number ");
    scanf("%d", &num);

    printf("%d %d", fibo0, fibo1);

    for (int i = 3; i <= num; ++i)
    {
        printf(" %d ", temp);

        fibo0 = fibo1;
        fibo1 = temp;
        temp = fibo0 + fibo1;

    }
    

    return 0;
}