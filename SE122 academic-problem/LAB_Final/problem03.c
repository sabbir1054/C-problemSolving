#include<stdio.h>
int main(){
        float num1, num2;
    printf("Please input number 1: ");
    scanf("%f", &num1);
    printf("Please input number 2: ");
    scanf("%f", &num2);

if (num1<num2)
{
    float temp = num1;
    num1 = num2;
    num2 = temp;
}
  
    printf("\nThe SUM of numbers is = %.2f\n", num1 + num2);
    printf("The Subtraction of numbers is = %.2f\n", num1 - num2);
    return 0;
}