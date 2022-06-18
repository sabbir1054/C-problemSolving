// #include<stdio.h>
// #include<stdbool.h>

// // i) Has return + Has parameter
// bool odd_even(int num){
//     if (num%2==0)
//     {
//         return true;
//     }else{
//         return false;
//     }
    
// }

// int  main(){
//     int ans = odd_even(10);
//     if (ans==1)
//     {
//         printf("Even number");
//     }else
//     {
//         printf("Odd number");
//     } 
//     return 0;
// }

// // ii) No return + Has parameter

// #include<stdio.h>
// void odd_even(int num){
//     if (num%2==0)
//     {
//          printf("Even number");
//     }else{
//         printf("Odd number");
//     }
    
// }

// int  main(){
//      odd_even(10);
//     return 0;
// }


// // iii) Has return + No parameter
//  #include<stdio.h>
// #include<stdbool.h>

// bool odd_even(){
//     int num;
//     printf("Please input your number : ");
//     scanf("%d", &num);
//     if (num%2==0)
//     {
//         return true;
//     }else{
//         return false;
//     }
    
// }
// int  main(){
//     int ans = odd_even();
//     if (ans==1)
//     {
//         printf("Even number");
//     }else
//     {
//         printf("Odd number");
//     } 
//     return 0;
// }


// iv) No return + No parameter
 #include<stdio.h>
#include<stdbool.h>

void odd_even(){
    int num;
    printf("Please input your number : ");
    scanf("%d", &num);
    if (num%2==0)
    {
       printf("Even number");
    }else{
        printf("Odd number");
    }
    
}
int  main(){
    odd_even();
    
    return 0;
}
