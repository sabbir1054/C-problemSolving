#include<stdio.h>
int main(){
    int arr[10] = {1, 8, 7, 2, 9, 3, 5,10, 6,4 };

    printf("Even numbers : \n");
    for (int  i = 0; i < 10; i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d ", arr[i]);
        }
        
    }
    printf("\nOdd numbers : \n");
    for (int  i = 0; i < 10; i++)
    {
        if (arr[i]%2!=0)
        {
             printf("%d ", arr[i]);
        }
        
    }
    return 0;
}