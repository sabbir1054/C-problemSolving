#include<stdio.h>
int main(){
    int arr[10] = {1, 8, 7, 2, 9, 3, 5,10, 6,4 };

    int minNum =arr[1];
    for (int i = 0; i < 10; i++)
    {
            if (arr[i]<minNum)
            {
                minNum = arr[i];
            }
    }

    int min2=arr[1];
     for (int i = 0; i < 10; i++)
    {
            if (arr[i]<min2&& arr[i]!=minNum)
            {
                min2 = arr[i];
            }
    }

    printf("Second min number is = %d", min2);

    return 0;
}