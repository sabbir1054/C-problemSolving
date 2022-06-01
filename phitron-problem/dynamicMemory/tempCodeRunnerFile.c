/* 
    Problem
take arr size 
take arr value 
take sum you want
if 2 element of arr value's sum =6 then print yes

Condition: in arr there are no same value

=== *** time limit *** ===
 */


#include<stdio.h>
#include<stdlib.h>
int main(){
    //take array size 
    int size_arr;
    scanf("%d", &size_arr);
   
    //// take array element 
    int arr[size_arr + 1];
    for (int i = 1; i <= size_arr; i++)
    {
        scanf("%d", &arr[i]);
    }

    //take sum you want
    int sum;
    scanf("%d", &sum);

    // make counter set value 0
    int * count = (int*)calloc(100, sizeof(int));


    // check and calculate

    for (int i = 1; i <= size_arr; i++)
    {
        int val = arr[i];
        count[val] = 1;
    }

    for (int i = 1; i <= size_arr; i++)
    {
        int val = arr[i];
        int rest = sum - val;
        if (rest==val)
        {
            continue;
        }

        if (rest<0)
        {
            continue;
        }
        
        if (count[rest]==1)
        {
            printf("Yes\n");
            return 0;
        }
        
        
    }

    printf("No\n");

    return 0;
}