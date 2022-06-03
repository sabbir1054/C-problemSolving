#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Please how term you need : ");
    scanf("%d", &num);


    int val = 1;
    for (int  i = 0; i <= num; i++)
    {
        
        printf("%d \n",val);
        sum = sum + val;
        val = val + 2;
    }

    printf("Total sum = %d", sum);

    return 0;
}