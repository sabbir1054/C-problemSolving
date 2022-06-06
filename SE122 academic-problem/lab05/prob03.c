#include<stdio.h>
int main(){
    int arr[10] = {1, 8, 7, 2, 9, 3, 5,10, 6,4 };

    int maxNum = 0;
    for (int i = 0; i < 10; i++)
    {
        
            if (arr[i]>maxNum)
            {
                maxNum = arr[i];
            }
            
        
        
    }

    printf("%d", maxNum);

    return 0;
}