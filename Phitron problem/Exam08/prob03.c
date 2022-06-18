#include<stdio.h>

int count_zero(char *number){
    
    int count = 0;
    int i = 0;
    while (number[i]!='\0')
    {
        if (number[i]=='0')
        {
            count++;
        }
        i++;
    }
    

    return count;
}
int main (){
    char number[]="0100100110111101010" ;
    int count = count_zero(number);
    printf("%d ",count);
    return 0;
}