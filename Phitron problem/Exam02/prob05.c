#include<stdio.h>

int main(){
int a,b,c,d,e,f,x,calc1,calc2,loop_condition=0,a2=0,d2=0;
scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&x);

if(a==x){
    calc1=a*b;
}else if(a>x ){
    calc1=x*b;
}else if(a<x){

    if(a+c<x){
        int sum = x/(a+c);
        int rest = x-((sum*a)+(sum*c));


        if(a>rest){
            calc1=((a*sum)+rest)*b;
        }else{

          while(a2<rest){
            a2=a+a;
            sum++;
          }
          calc1=((a*sum))*b;

        }

    }else if(a+c>=x){
        calc1=a*b;
    }
}


if(d==x){
    calc2=d*e;
}else if(d>x ){
    calc2=x*e;
}else if(d<x){

    if(d+f<x){
        int sum = x/(d+f);
        int rest = x-((sum*d)+(sum*f));


        if(d>rest){
            calc2=((d*sum)+rest)*e;
        }else{

          while(d2<rest){
            d2=d+d;
            sum++;
          }
          calc2=((d*sum))*e;

        }

    }else if(d+f>=x){
        calc2=d*e;
    }
}




if(calc1>calc2){
    printf("Takahashi");
}else if(calc1<calc2){
    printf("Aoki");
}else if(calc1==calc2){
    printf("Draw");
}



return 0;
}
