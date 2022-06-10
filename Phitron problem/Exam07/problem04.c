#include<stdio.h>
int main(){
    int test_case,max,max_test;
    scanf("%d", &test_case);
    int count[10] = {0};
    int arr[test_case];

    for (int i = 0; i < test_case; i++)
    {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
       
    }

    max = count[0];
    for (int i = 1; i <= test_case; i++)
    {
        if (max<count[i])
        {
            max_test = i;
            max = count[i];

            
        }
        if(max==count[i]){
            max_test = i;
        }
        
    }
    
    
  
         if (max>=3)
    {
        printf("%d", max_test);
    }else{
        printf("%d", -1);
    }
    

    return 0;
}