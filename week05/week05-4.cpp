#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	//STEP3: keyboard keys
	char s[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./'";
	char c;
	while (scanf("%c",&c) == 1){ //step 1: input
		c=tolower(c);
		if(c==' ' || c=='\n') printf("%c",c);
		else{
		
		 	c=*(strchr(s,c)-2);
			printf("%c",c);
		 }
	  }
		
		
  }



