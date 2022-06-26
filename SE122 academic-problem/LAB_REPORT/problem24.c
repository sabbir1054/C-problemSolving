#include<stdio.h>
int main(){
    int num,temp,rev=0;
    printf("please input your number : ");
    scanf("%d", &num);
    temp = num;
    int sum = 0;
    while (temp!=0)
    {
        int rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }

    while (num!=0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("\nThe Sum is = %d\n", sum);
    printf("The REVERSE Number is = %d", rev);

    return 0;
}