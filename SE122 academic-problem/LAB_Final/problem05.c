#include<stdio.h>
int main(){
    int num1, num2, num3;
    
    printf("Please Enter Your Number 1: ");
    scanf("%d", &num1);
    printf("Please Enter Your Number 2: ");
    scanf("%d", &num2);
    printf("Please Enter Your Number 3: ");
    scanf("%d", &num3);

    if (num1>num2&&num1>num3)
    {
        printf("Number 1 = %d is big",num1);
    }else if (num2>num1&&num2>num3)
    {
        printf("Number 2 = %d is big",num2);
    }else if (num3>num1&&num3>num2)
    {
        printf("Number 3 = %d is big",num3);
    }
    
    
    return 0;
}