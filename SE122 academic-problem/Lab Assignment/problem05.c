#include<stdio.h>
int main(){
    int rowNum = 10;

    for (int i = 0; i < rowNum; i++)
    {
        for (int j = 0; j <i; j++)
        {
            printf(" *");

        }

        printf("\n");
        }
    

    return 0;
}