#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s", &a);
    int len = strlen(a);
  


    if (a[0]>='a'&&a[0]<='z')
    {
        a[0] = a[0]-32;
    }
    for (int i = 1; i <len ; i++)
    {
        if (a[i]>='a'&&a[i]<='z')
        {
            a[i] = a[i];
        }else{
            a[i] = a[i] + 32;
        }
        
    }

    printf("%s",a);

    
    return 0;
}