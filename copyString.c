//Matthew Michael Sherlin
//Systems Programming

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void copy(char t[], char s[]){
int i=0;
while(t[i] != '\0'){
  s[i] = t[i];
  ++i;
  }
s[i]='\0';
}


int main(void){

char str1[20]= "I Love C Language";
char str2[20];

printf("String 1 contains: %s \nString 2 contains: %s \n", str1, str2);
copy(str1, str2);
printf("Copy function completed\nString 1 contains: %s \nString 2 contains: %s \n", str1, str2);

return 0;
}