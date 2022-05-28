#include<stdio.h>
int main(){
    int num;
    printf("please input number ");
    scanf("%d", &num);

for (int i = 1; i <=num ; i++)
{
    for (int k = 1; k <=num-i; k++)
    {
        printf(" ");
    }
    
    for (int j = 1; j <=(2*i-1); j++)
    {
        printf("*");
    }
    printf("\n");
}


    return 0;
}