#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int num_of_loop;
    scanf("%d", &num_of_loop);

    for (int k = 0; k < num_of_loop; k++)
    {
        int size,pos;
        scanf("%d", &size);
        pos = size;
        char telephone[size+1];
        scanf("%s",&telephone);
        int len = strlen(telephone);
        for (int i = 0; i < len; i++)
        {
            if (telephone[i]=='8')
            {
                 pos = i;
                 break;
            }
            
        }

        if (len-pos>=11)
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
        

    }
    

    return 0;
    }       

