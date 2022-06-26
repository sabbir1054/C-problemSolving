#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Please input the term of series : ");
    scanf("%d", &num);
    
    int firstNum = 1,sum=0;
    
    
    for (int i = 1; i <= num; i++)
    {
        sum = sum + firstNum;
        firstNum = firstNum + pow(10, i);

        
    }
    printf("%d", sum);
    return 0;
}