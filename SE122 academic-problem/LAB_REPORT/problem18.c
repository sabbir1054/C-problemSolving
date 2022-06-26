#include<stdio.h>
int main(){
    int num;
    printf(" Please enter the term : ");
    scanf("%d", &num);
    int odd=1,sum=0;
    printf("Odd numbers are : \n");
    for (int i = 0; i < num ; i++)
    {
        printf("%d ", odd);
        sum = sum + odd;
        odd = odd + 2;
    }
    printf("\nsum is %d", sum);

    return 0;
}