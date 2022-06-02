#include<stdio.h>

void numSwap(int * num1,int * num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return;
}


void sort(int n,int a[]){
    for (int steps = 0; steps < n; steps++)
    {
        for (int i = n-1; i >0; i--)
        {
            //write code here 
            
            if (a[i]>a[i-1])
            {
                numSwap(&a[i], &a[i - 1]);
            }
            
        }
        
    }
    
}


int main(){
    int arr[] = {1, 6, 8, 7, 3, 2, 4, 5};

    printf("Shorting Array \n");

    sort(8,arr);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}