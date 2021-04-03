//Matthew Michael Sherlin
//Systems Programming

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int compare(char s[], char s2[]){
	int i = 0;
  	while(s[i] == s2[i]){
  		if(s[i] == '\0' && s2[i] == '\0') break;
	  	i++;
  	}
  int resultNum=s[i]-s2[i];
  printf("value returned: %d \n", resultNum);
  return resultNum;
}


int main(void){

char s[]= "doggy";
char s2[]= "cat";

printf("String 1: %s \nString 2: %s \nCompare strings begin.\n", s, s2);
int result = compare(s, s2);
  	
if(result < 0) printf("String 1 is less than String 2\n");
if(result > 0) printf("String 1 is greater than String 2 \n");
if(result == 0) printf("String 1 is equal to String 2 \n");

return 0;

}