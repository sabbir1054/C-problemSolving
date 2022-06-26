#include<stdio.h>
int main(){
    int arr[10] = {1, 2, 5, 3, 4, 5, 6, 7, 8, 9};
    int arr2[10];
printf("First Array : ");
    for (size_t i = 0; i < 10; i++)
    {
        arr2[i] = arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Second Array : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}