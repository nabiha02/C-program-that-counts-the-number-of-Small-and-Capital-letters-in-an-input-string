#include <stdio.h> //Find the Small & Capital letters

int main(void){

 char str[100], ch;
 int Cap,Small,i,words,others;

 printf("Input your string: ");
 gets(str);

 i=words=Cap=Small=others=0;

 while((ch = str[i])!='\0'){

       if(ch>= 'A' && ch<= 'Z')

        Cap++;
       else if(ch>= 'a' && ch<= 'z')

        Small++;
       else

        others++;

    i++;

 }


  words++;

  printf("Number of small letters is %d\n", Small);
  printf("Number of capital letters is %d\n", Cap);





}
