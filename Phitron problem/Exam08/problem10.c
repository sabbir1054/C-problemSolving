#include<stdio.h>

void reverse_array(int *arr,int size){
    int i = 0, j = size - 1;

   while (i<j)
   {
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
       i++;
       j--;
   }
}

void change_array(int *arr,int size,int *arr2){
   
   reverse_array(arr, size);

   for (int i = 0; i < size; i++)
   {
       arr2[i] = arr[i];
   }
   
}

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int arr2[5]={0};

    change_array(arr, 5, arr2);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    

    return 0;
}