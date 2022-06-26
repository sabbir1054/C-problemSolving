#include<stdio.h>
int main(){
     int arr[10] = {1, 8, 7, 2, 9, 3, 5,10, 6,4 };

    int minNum = arr[1];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]<minNum)
        {
            minNum = arr[i];
        }
    }

    int maxNum = 0;
        for (int i = 0; i < 10; i++)
    {
        if (arr[i]>minNum)
        {
            minNum = arr[i];
        }
    }

printf("Minimum number is %d\n Maximum number is %d", minNum,maxNum);
    
    

    return 0;
}