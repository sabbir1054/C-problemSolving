#include<stdio.h>
#include<string.h>
int main()

{
    char str[1000];
    scanf("%s", &str);
    int len = strlen(str);
    int count1 = 0, count2 = 0, count3 = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i]=='1')
        {
            count1++;
        }
        if (str[i]=='2')
        {
            count2++;
        }
        if (str[i]=='3')
        {
            count3++;
        }
        
    }
    
    if (len==1)
    {
        printf("%s", str);
    }else{

        //full code
        
    for (int i = 0; i < count1; i++)
    {
        char c1 = '1';

        if (count2==0&&count3==0)
        {
            if (i==count1-1)
            {
            printf("%c", c1);
            }else
            {
                printf("%c+", c1);
            }
        }else
        {
             printf("%c+", c1);
        }
        
        
       

    }
    for (int i = 0; i < count2; i++)
    {
        char c1 = '2';
    
        if (count3==0)
        {
            if (i==count2-1)
            {
            printf("%c", c1);
            }else
            {
                printf("%c+", c1);
            }
        }else
        {
             printf("%c+", c1);
        }

    }
    for (int i = 0; i < count3; i++)
    {
        char c1 = '3';
        if (i==count3-1)
        {
           printf("%c", c1);
        }else
        {
            printf("%c+", c1);
        }
    }
    }
    
    


    return 0;
}
