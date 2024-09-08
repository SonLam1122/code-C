#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main(){
	char s1[256], s2[256];
	printf("Enter a string s1: ");
	fflush(stdin);
	gets(s1);
	trim(s1);
	printf("\n%s co %d words", s1, countWordsInStr(s1));
	printf("\n%s co %d numbers", s1, countNumbersInStr(s1));
	printf("\nEnter a string s2 (proper name): ");
	fflush(stdin);	
	gets(s2);
	trim(s2);
	printf("\nAfter extra blank are removed s1: ");
	puts(s1);
	printf("Length of s1: %d", strlen(s1));
	printf("\nProper name s2: %s", nameStr(s2));
	printf("\nLength of s2: %d", strlen(s2));
	printf("\n\nComparing s1, s2: %d", strcmp(s1, s2));
	if(strcmp(s1, s2)==1) printf(", s1>s2");
	else if(strcmp(s1, s2)==-1) printf(", s1<s2");
	else printf(", s1=s2");
	strupr(s1);
	printf("\n\nUpper case s1: %s", s1);
	strcat(s1, " ");
	strcat(s1, s2);
	printf("\nAfter append s2 to s1 = %s", s1);
	char s3[21];
	printf("\nEnter a substring s3 (s3 in s1): ");
	gets(s3);
	char* ptr=strstr(s1, s3);
//	printf("\nAddr of s1: %u", s1);
//	printf("\nAddr of s3: %u", s3);
//	printf("\nAddr of substr: %u", ptr);
	if(ptr)
		printf("\nFound.\nPos: %d; First occurrence %s in %s is:\n%s", ptr-s1, s3, s1, ptr);
	else
		printf("\nString s3: %s not found in s1: %s", s3, s1);
	if(ptr){
		char s4[21];
		printf("\nReplace all s3: %s with s4: ", s3);
		fflush(stdin);
		gets(s4);
		replaceAll(s1, s3, s4);
		trim(s1);
		printf("\nResult: ");
		puts(s1);
		printf("s1 reverse: %s", strrev(s1));
	}
	/*int *a1=(int *)calloc(5, sizeof(int));
	int *a2=(int *)calloc(7, sizeof(int));
	int i;
	for(i=0; i<5; i++) a1[i]=i;
	for(i=0; i<7; i++) a2[i]=2*i+1;
	a1=a2;
	print(a1, 7);
	puts("\n");
	print(a2, 5);*/
	
	//int m=9, n=10;
//	char S[256];
//	int max=256;
	//int o=12;
	//printf(S);
	// puts(S);
	//printf("\nn=%d, m=%d, s=%s, o=%d\n", n, m, S, o);
	//scanf("%[^abcd]", S);
	//gets(S);
	//printf("\nn=%d, m=%d, s=%s, o=%d\n", n, m, S, o);
//	getStr(S, max);
//	clear();
//	printf(S);
	getch();
	return 0;
}
