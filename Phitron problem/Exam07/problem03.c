#include<stdio.h>
#include <string.h>
int main(){
    char a[1001];
    scanf("%s", &a);
    int len = strlen(a);
    int count[10] = {0};

    for (int i = 0; i < len; i++)
    {
        if (a[i]>='0' && a[i]<='9')
        {
            char d = a[i]-48;
            count[d]++;

        }
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", count[i]);
    }
    
    

    return 0;
}