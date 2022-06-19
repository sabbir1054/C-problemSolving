#include<stdio.h>
int main (){
    int number;
    printf("Please input your number ");
    scanf("%d", &number);
    for (int i = 1; i <number; i++)
    {
        if (number%i==0)
        {
            printf("The factor is  %d \n", i);
        }
        
    }
    
    return 0;
}