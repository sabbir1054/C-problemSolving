#include<stdio.h>
#include<stdbool.h>

bool check_array(int *arr,int N){
   
    int count =0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i]>0 && arr[i]<=N)
        {
            count++;
        }
    }
    if (count==N)
    {
        return true;
    }else{
        return false;
    }
}

//main function
int main(){
    
    int arr[6] = {2, 3, 1, 5, 4,6};
    int ans = check_array(arr, 6);

    if (ans==0)
    {
        printf("False");
    }else{
        printf("True");
    }
    

    return 0;
}