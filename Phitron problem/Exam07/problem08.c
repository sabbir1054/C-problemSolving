#include<stdio.h>
#include<string.h>
int main(){
    char number[100],count1,count0,countB=0;
    gets(number);
    
    for (int i = 0; i <strlen(number); i++)
    {
        if (number[i]=='0')
        {
            count1 = 0;
            count0++;
            if (count0==7)
            {
                countB++;
            }
            
        }else if (number[i]=='1')
        {
            count0 = 0;
            count1++;
            if (count1==7)
            {
                countB++;
            }
        }
        
        
    }
    
    if (countB>0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    
    return 0;
}