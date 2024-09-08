#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

char *removeAllCharExceptIsAlpha(char s1[], char s2[]){
	int i, j=0, L=strlen(s1);
	char c;
	for(i=0; i<L; i++)
		if(isalpha(s1[i])){
			s2[j]=s1[i];
			j++;
		}
	s2[j]='\0';
	return s2;
}

int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	char s1[100], s2[100];
	fflush(stdin);
	gets(s1);
	removeAllCharExceptIsAlpha(s1, s2);

  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%s", s2);

  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
