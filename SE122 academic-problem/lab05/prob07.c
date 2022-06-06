#include<stdio.h>
int main(){
    int arr[10] = {60,70,80,90,100,110,120,130,140,150};

 
    for (int i = 0; i <10 ; i++)
    {

        if (arr[i]>100)
        {
            printf("%d ", arr[i]);
         }
         
        
    }

    

    return 0;
}