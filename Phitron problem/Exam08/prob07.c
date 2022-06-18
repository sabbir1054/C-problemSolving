#include<stdio.h>

int count_swaps(int *arr,int size){

    int count = 0;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[i])
            {
               
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            count++;
            }
            
        }
        
    }
    return count;
}


int main(){
    int arr[10] = {2, 3, 6, 1, 4, 10, 64, 98, 20, 29};
    int count = count_swaps(arr, 10);
    printf("\n %d ", count);

    return 0;
}