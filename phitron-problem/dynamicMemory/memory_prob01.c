/* 
Problem
take arr size 
take arr value 
if 2 element of arr value's sum =6 then print yes

Con: in arr there are no same value
=== *** No time limit *** ===
 */


#include<stdio.h>
int main(){

    int arr_size;
    scanf("%d", &arr_size);

    int arr[arr_size + 1];

for (int i = 1; i <= arr_size; i++)
{
    scanf("%d", &arr[i]);
}



    for (int  i = 1; i <=arr_size-1; i++)
    {
        for (int j = 1; j <=arr_size; j++)
        {
            if(arr[i]+arr[j]==6){
                printf("Yes\n");
                return 0;
            }
        }
        
    }

    printf("No\n");

    return 0;
}