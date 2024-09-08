#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

char* lTrim(char s[]){
	int i=0;
	while(s[i]==' ') i++;
		if(i>0) 
			strcpy(&s[0], &s[i]);
	return s;
}

char* rTrim(char s[]){
	int i=strlen(s)-1;
	while(s[i]==' ') i--;
	s[i+1]='\0';
	return s;
}

char* trim(char s[]){
	rTrim(lTrim(s));
	char *ptr;
	ptr=strstr(s, "  ");
	while(ptr!=NULL){
		strcpy(ptr, ptr+1);
		ptr=strstr(s, "  ");
	}
	return s;
}

char* nameStr(char s[]){
	int i=0, L=strlen(s); 
	for(i=0; i<L; i++)
		if(i==0 || (i>0 && (s[i-1]==' ')))
			s[i]=toupper(s[i]);
	return s;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	char s[256];
	fflush(stdin);
	gets(s);
	trim(s);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%s\n", nameStr(s));

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
