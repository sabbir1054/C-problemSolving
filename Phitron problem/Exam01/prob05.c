#include<stdio.h>
int main(){

int x,y,n;
scanf("%d%d%d",&x,&y,&n);

for(int i=1;i<=n;i++){

    if(i%x==0 && i%y==0){
        printf("FizzBuzz\n");
    }else if(i%y==0){
        printf("Buzz\n");
    }else if (i%x==0){
        printf("Fizz\n");
    }else{
    printf("%d\n",i);
    }
}

}
