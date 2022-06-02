#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main()
{
    int testcases;
  	char str[101];

    scanf("%d", &testcases);

    char results[testcases][101];

    for (int m=0; m < testcases; m++){
        scanf("%s", str);
        int k = 1;
        char temp[strlen(str)];
        temp[0] = str[0];
      
        for(int i = 1; i <= strlen(str)-2; i++)
        {
            if (i%2 == 0){
             
                temp[k] = str[i];
                k++;
            }

        }
       
        temp[k] = str[strlen(str)-1];
        temp[k+1] = '\0';

        strcpy(results[m], temp);
    }

    for (int i=0; i < testcases; i++){
        printf("%s\n", results[i]);
    }

  	return 0;
}
