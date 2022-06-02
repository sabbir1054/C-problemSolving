#include <stdio.h>
#include<stdbool.h>

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


int main(){

    int arr[] = {60,50,40,30,20,10};//10,20,30,40,50,60

    if(is_reverse_shorted(arr,6)){
        printf("This is reverse sorted");
    }else{
        printf("Not reverse sorted");
    }

    return 0;
}