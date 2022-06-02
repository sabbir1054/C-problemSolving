#include<stdio.h>
int main(){

int a,b,c;
scanf("%d %d %d",&a,&b,&c);

if((c>a&&c<b) || (a==b&&b==c&&c==a)){
    printf("Yes\n");
}else{
printf("No\n");
}

}