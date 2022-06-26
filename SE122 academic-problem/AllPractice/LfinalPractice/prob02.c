#include<stdio.h>
int main(){
    int num1, num2;
    printf("Please input number 1: ");
    scanf("%d", &num1);
    printf("Please input number 2: ");
    scanf("%d", &num2);

if (num1<num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
  
    printf("\nThe SUM of numbers is = %d\n", num1 + num2);
    printf("The Subtraction of numbers is = %d\n", num1 - num2);
    printf("The Multiplication of numbers is = %d\n", num1 * num2);
    printf("The DIVISION of numbers is = %d\n",num1/num2);

    return 0;
}