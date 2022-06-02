
#include<stdio.h>

int main()
{
    int height,width,count=1;
    scanf("%d %d",&height,&width);

    for(int i=1; i<=height; i++)
    {

        if(i==1)
        {

            for(int j=1; j<=width; j++)
            {
                printf("#");
            }

        }
        else if(i%2==0)
        {
            if(count==1)
            {
                for(int j=1; j<=width-1; j++)
                {
                    printf(".");
                }
                printf("#");
            }
            else if(count%2==0)
            {
                printf("#");
                for(int j=1; j<=width-1; j++)
                {
                    printf(".");
                }
            }
            else
            {
                for(int j=1; j<=width-1; j++)
                {
                    printf(".");
                }
                printf("#");
            }
        count=count+1;
        }
        else
        {
            for(int j=1; j<=width; j++)
            {
                printf("#");
            }
        }


        printf("\n");
    }


    return 0;
}
