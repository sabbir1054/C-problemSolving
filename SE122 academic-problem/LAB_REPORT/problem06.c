#include<stdio.h>
int main(){
    int arr[10] = {5, 10, 20, 10, 30, 10, 20, 40, 50, 60};
    
    for(int i = 0; i < 10; i++){
        int j;
        for (j = 0; j < 10; j++)
        {
            if (arr[i] == arr[j] && i != j)
                break;
      }
      if(j == 10 ){
         printf("\nunique elements in an array is : %d ",arr[i]);
      }
   }
    return 0;
}