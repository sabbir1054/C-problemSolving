#include<stdio.h>
int main(){
    int num = 100,sum=0;
    for (int i = num; i <=200; i++)
    {
        if (i%9==0)
        {
            printf("Devisable by 9 : %d\n",i);
            sum = sum + i;
        }
        
    }
    printf("The sum is = %d", sum);
    return 0;
}