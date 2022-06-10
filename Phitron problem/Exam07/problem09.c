#include<stdio.h>
int main(){
    int size,countZero=0,countOne=0;
    scanf("%d", &size);
    char a[size];
    scanf("%s", &a);

    for (int i = 0; i < size; i++)
    {
        if (a[i]=='z')
        {
            countZero++;
        }else if (a[i]=='n')
        {
            countOne++;
        }
        
    }

    for (int i = 0; i < countOne; i++)
    {
        printf("1 ");
    }

    for (int i = 0; i < countZero; i++)
    {
        printf("0 ");
    }
    
    
    
    


    return 0;
}