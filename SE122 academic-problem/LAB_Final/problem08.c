#include<stdio.h>
int main()
{
   int marks;

   printf("Enter marks( 0-100 ): ");
   scanf("%d", &marks);

   switch( marks / 10 )
   {

   case 10:
   case 9:
   case 8:
     printf("Grade: A+");
     break;

   case 7:
     printf("Grade: A");
     break;

   case 6:
     printf("Grade: A-");
     break;

   case 5:
     printf("Grade: B");
     break;
   case 4:
     printf("Grade: C");
     break;

   default:
     printf("Grade: F");
     break;

   }

   return 0;
}