#include<stdio.h>
int main()
{

char input_char;
scanf("%c",&input_char);

if(input_char=='a'||input_char=='e'||input_char=='i'||input_char=='o'||input_char=='u'){
    printf("vowel\n");

}else{
printf("consonant\n");
}

return 0;
}
