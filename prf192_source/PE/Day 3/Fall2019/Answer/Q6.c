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

void clear(void){
	while (getchar()!='\n');
}

void getStr(char s[], int max){
	int i=0, c;
	while((c=getchar())!='\n' && c!=EOF)
		if(i<max) s[i++]=(char) c;
	s[i]='\0';
}

void print(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
}

int countWordsInStr(char s[]){
	trim(s);
	int i, cnt=0, L=strlen(s);
	for(i=0; i<L; i++)
		if((s[i]!=' ') && ((i==0) || (s[i-1]==' '))) 
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

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char o[256], p[256], q[256]; // q = p_reverse
	fflush(stdin);
	gets(o);
	trim(o);
	strlwr(o);
	fflush(stdin);
	gets(p);
	trim(p);
	strlwr(p);
	strcpy(q, p);
	strrev(q);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(strlen(o)<strlen(p)){
  	printf("o= %s - must be long string, p= %s - must be short string.\n", o, p);
  }
  else{
	char* ptr=strstr(o, p);
  	if(ptr){
  		replaceAll(o, p, q);
  		puts(o);
  	}
  	else
  		printf("Not found %s in %s.\n", p, o);
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
