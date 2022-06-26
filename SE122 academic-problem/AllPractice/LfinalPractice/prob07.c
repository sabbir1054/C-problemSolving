#include<stdio.h>
int main(){
    
    for (int i = 1; i <= 300; i++)
    {
        int c=0;
        for (int j = 1; j <=i; j++)
        {
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
            printf("%d\n", i);
        }    
    }
    return 0;
}