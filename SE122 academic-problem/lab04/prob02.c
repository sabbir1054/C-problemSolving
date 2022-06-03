#include<stdio.h>
int main(){

    int num1, num2;
    char operator;
    printf("Please input your calculation like this: 8 + 10 \n");
    scanf("%d %c %d", &num1, &operator, & num2);

    switch (operator)
    {
    case '+':
        printf("Your sum is = %d", num1 + num2);
        break;
    case '-':
        printf("Your subtract is = %d", num1 - num2);
        break;
    case '*':
        printf("Your multiplication is = %d", num1 * num2);
        break;
    case '/':
        printf("Your division is = %d", num1 / num2);
        break;
    
    default:
        printf("Please input your number according to example ");
    }

    return 0;
}