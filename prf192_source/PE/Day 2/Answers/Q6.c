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
	trim(s);
	for(i=0; i<L; i++)
		if(i==0 || (i>0 && (s[i-1]==' ')))
			s[i]=toupper(s[i]);
	return s;
}

char* replaceAll(char* source, char* subStr, char* repStr){
	int subL=strlen(subStr);
	int repL=strlen(repStr);
	char *ptr=strstr(source, subStr);
	char temp[256];
	int i;
	while(ptr!=NULL){
		strcpy(ptr, ptr+subL);
		if(repL>0){
			strcpy(temp, ptr);
			strcpy(ptr+repL, temp);
			for(i=0; i<repL; i++)
				*(ptr+i)=repStr[i];
		}
		ptr=strstr(source, subStr);
	}
	return source;
}

void print(char *a, int n){
	int i;
	for(i=0; i<n; i++)
		printf("%c ", a[i]);
}

int countWordsInStr(char s[]){
	trim(s);
	int i, cnt=0, L=strlen(s);
	for(i=0; i<L; i++)
		if((s[i!=' ']) && ((i==0) || (s[i-1]==' '))) 
			cnt++;
	return cnt;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s[101];
  fflush(stdin);
  gets(s);
  trim(s);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int i, L=strlen(s), x=0, S=0;
  for(i=0; i<L; i++){
  	if(isdigit(s[i])){
  		// Convert char ('0'..'9) to int (0..9)
  	  	x=s[i]-'0';
  		if(x%2==1) S+=x;	
	}
  }
  printf("%d", S);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
