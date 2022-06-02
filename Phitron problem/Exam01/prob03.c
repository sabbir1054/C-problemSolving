#include<stdio.h>
int main()
{
    int count,sum=0,temp;
    scanf("%d",&count);
    for(int i=1; i<=count; i++)
    {
        scanf("%d",&temp);
        if(temp<0)
        {
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}
