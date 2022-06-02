#include<stdio.h>
#include<stdbool.h>
//swap function
void numSwap(int * num1,int * num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return;
}
// check the array is sorted or not
bool is_reverse_shorted(int arr [], int num){
    int x = 1, y = 1, i = 0;
    while ((x==1)||(y==1)&& i< num - 1)
    {
        if (arr[i]<arr[i+1])
        {
            y = 0;
        }else if(arr[i]>arr[i+1]){
            x = 0;
        }
        i++;
        }
    if (y==1)
    {
        return true;
    }else{
        return false;
    }   
}
//selection sort
void selectionSort(int arr[], int size){
    for (int  i = 0; i < size-1; i++)
    {
        int min = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]>arr[min]) 
            {
                min = j;
            }
            if (is_reverse_shorted(arr,size))
            {
                break;
            }
            numSwap(&arr[min], &arr[i]);    
        }      
    }
    
}
//main function
int main(){
    // unsorted array;
    int arr[] = { 14, 74, 69,  50, 40, 20}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    printf("Sorted array is : ");

    for (int  i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    
}