#include<stdio.h>
int main(){
    int num;
    printf("please input a number ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j >= 1; j--)
        {
          
            
            printf("%d ", j);
        }
        printf("\n");
        }
    

    return 0;
}