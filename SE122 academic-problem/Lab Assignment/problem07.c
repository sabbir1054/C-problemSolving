#include<stdio.h>
int main(){
    
    for (int i = 1; i <= 200; i++)
    {
        int count=0;
        for (int j = 1; j <=i; j++)
        {
            if(i%j==0){
                count++;
            }
        }
        
        if(count==2){
            printf("%d\n", i);
        }
        
    }
    
    

    return 0;
}