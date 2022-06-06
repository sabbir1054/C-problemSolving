#include<stdio.h>
int main(){
    int arr[10] = {1, 8, 7, 2, 9, 3, 5,10, 6,4 };

    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <10; j++)
        {
            if (arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }

    for (int i = 0; i <10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    

    return 0;
}