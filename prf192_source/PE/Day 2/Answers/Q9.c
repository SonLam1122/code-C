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

int countWordsInStr(char s[]){
	trim(s);
	int i, cnt=0, L=strlen(s);
	for(i=0; i<L; i++)
		if((s[i!=' ']) && ((i==0) || (s[i-1]==' '))) 
			cnt++;
	return cnt;
}

int countNumbersInStr(char s[]){
	trim(s);
	int i, cnt=0, L=strlen(s);
	for(i=0; i<L; i++)
		if(isdigit(s[i]) && ((i==0) || !isdigit(s[i-1])))
			cnt++;
	return cnt;
}
	
void stringBubbleSort(char s[][256], int n){
	int i, j;
	char t[256];
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--)
			if(strcmp(s[j], s[j-1])<0){
				strcpy(t, s[j]);
				strcpy(s[j], s[j-1]);
				strcpy(s[j-1], t);
			}
	}
}

void searchCharInStrs(char s[], char a){
	const char *sWhitespace=" ";
  	char *token, c;
  	token=strtok(s, sWhitespace);
  	int i=0, found=0;
  	while(token!=NULL){
  		for(i=0; token[i]!='\0'; i++){
  			c=tolower(token[i]);
  			if(c==a){
  				found=1;
  				puts(token);  				
			}
		}	
    	token = strtok(NULL, sWhitespace);
  	}
  	if (found==0)
  		puts("Not found!");
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", &n);
  char s[256];
  fflush(stdin);
  gets(s);
  trim(s);
  int i, L, demNtu=0, keepReading=1;
  L=strlen(s);
  /*if(L>0) demNtu=1;
  for(i=0; i<L && keepReading==1; i++){
	if(s[i]==' ') 
		++demNtu;
	if(demNtu==n){
		keepReading=0;
		s[i]='\0';
	}
  }*/
  char a, b;
  printf("\nsearchChar: ");
  a=getchar();
  b=tolower(a);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  //if(demNtu==n)
  	searchCharInStrs(s, b);
  //else
    //printf("\nNot enough n!\n");

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

