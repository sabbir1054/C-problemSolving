#include<stdio.h>
int main(){
    int given_num ,checked_number=0;
    printf("Enter the number for check : ");
    scanf("%d", &given_num);

    if(given_num==0||given_num==1){
        checked_number = 1;
    }
        for (int i=2; i < given_num;i++){
            if (given_num%i==0) {
                checked_number = 1;
                break;
            }
        }

         if (checked_number == 0)
    printf("%d is a prime number.", given_num);
  else
    printf("%d is not a prime number.", given_num);
    
    

    return 0;
}