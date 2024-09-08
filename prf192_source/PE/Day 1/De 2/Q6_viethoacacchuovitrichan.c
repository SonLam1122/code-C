#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

char *convertOddToUpperChar(char s[]){
	int i, L=strlen(s);
	for(i=0; i<L; i++)
		if(i%2==1)
			s[i]=toupper(s[i]);
	return s;
}

int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[100];
	fflush(stdin);
	gets(s);
  
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%s", convertOddToUpperChar(s));  
  
  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
