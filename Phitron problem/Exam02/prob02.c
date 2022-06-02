#include <stdio.h>

int main()
{
int number_of_room,p,q,count=0;
scanf("%d",&number_of_room);

for(int i=1;i<=number_of_room;i++){
    scanf("%d %d",&p,&q);

    if(p<q&&q-p>=2){
        count++;
    }
}

printf("%d\n",count);

    return 0;
}
