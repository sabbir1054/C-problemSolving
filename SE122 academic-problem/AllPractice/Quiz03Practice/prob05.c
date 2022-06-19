#include<stdio.h>
int main(){
    int num, sum = 0, temp;
    printf("Please input your number : ");
    scanf("%d", &num);
    temp = num;
    while (num!=0)
    {
        int rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if (temp==sum)
    {
        printf("Yes this is armstrong number");
        
    }else
    {
        printf("No this is not armstrong number");
    }
    
    
    

    return 0;
}