#include<stdio.h>
int main(){
    int choiceNum,num,factorial=1;
    
    printf("Choose your program : \n");
    printf("----------------------\n");
    printf("\t1: Factorial\n");
    printf("\t2: Prime\n");
    printf("\t3: Odd/Even\n");
    printf("\t4: Exit\n");

	printf("Enter program sl no: ");
    scanf("%d", &choiceNum);


    switch (choiceNum)
    {
    case 1:
        //code for factorial 
             printf("Enter a number: ");    
             scanf("%d",&num);    
             for(int i=1;i<=num;i++){    
            factorial=factorial*i;    
          }    
        printf("Factorial of %d is: %d",num,factorial);
        break;
    case 2:
    //code for prime number
    printf("Enter a positive number: ");    
    scanf("%d",&num);  

        int count=0;
        for (int j = 1; j <=num; j++)
        {
            if(num%j==0){
                count++;
            }
        }
        if(count==2){
            printf("This is Prime number");
        }else{
            printf("This is not a prime number");
        }
        
        break;

    case 3:
        //code for odd or even
        printf("Enter a positive number: ");    
        scanf("%d",&num); 

        if (num%2!=0)
        {
            printf("this is an odd number");
        }else{

            printf("this is an even number");
        }
        
    break;

        default:
            printf("No case choose");
            
    }

    return 0;
}