#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){
    char a[101],b[101];
    // scanf("%s", &a);
    gets(a);
    int len = strlen(a);

    int countUP = 0,countLO=0;
    for (int i = 0; i < len; i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            countLO++;
        }
        
    }
    

    if (a[0]>='a'&&a[0]<='z')
    {
        for (int i = 1; i < len; i++)
        {
            if (a[i]>='A'&& a[i]<='Z')
            {
                countUP++;
            }
            
        }
        
    }else if(a[0]>='A'&&a[0]<='Z'){
         for (int i = 0; i < len; i++)
        {
            if (a[i]>='A'&& a[i]<='Z')
            {
                countUP++;
            }
            
        }
    }else if (len==1 && a[0]=='z')
    {
        countUP++;
    }


// make change code
  for (int i = 0; i < len; i++)
       {
          if (a[i]>='a' && a[i]<='z')
          {
              b[i] = toupper(a[i]);
          }
          if (a[i]>='A' && a[i]<='Z')
          {
              b[i] = tolower(a[i]);
          }
          
          
       }
       b[len] = '\0';

       if (len == countUP || (len - 1 == countUP && (a[0] >= 'a' && a[0] <= 'z')))
       {
           printf("%s", b);
    }else {
        printf("%s", a);
    }
    


    
    return 0;
}