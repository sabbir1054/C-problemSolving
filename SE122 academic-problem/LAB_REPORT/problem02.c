#include<stdio.h>
int main(){
    int num;
    printf("Please input the size : ");
    scanf("%d", &num);

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = num-1; i >=0 ; i--)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}