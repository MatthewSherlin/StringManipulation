//Matthew Michael Sherlin
//Systems Programming

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void concat(char t[], char s[]){
int i=0;
for(i=0; t[i]!='\0'; ++i);
for(int j=0; s[j]!='\0'; ++j, ++i) t[i]=s[j];
t[i]='\0';
}


int main(void){

char t[20]= "I love ";
char s[]= "C language";

printf("String 1: %s \nString 2: %s \n", t, s);
concat(t, s);
printf("Concatenation finished.\nString 1: %s \n", t);
   
return 0;
}