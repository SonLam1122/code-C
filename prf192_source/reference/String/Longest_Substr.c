#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 100

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

int findDuplicateCharInStr(char ch, char s2[256]){
	char *ptr;
	ptr = strchr(s2, ch);
	if(ptr!=NULL)
		return ptr-s2;
	else
		return -1;
}

int main()
{
	char s[256], s1[256], s2[256], ch;
	int i, j, k, L, max=1, max1;
	fflush(stdin);
	scanf("%s", s);
	trim(s);
	s1[0]='\0';
	s2[0]='\0';
	L=strlen(s);
	if(L<=1){
		printf("Highest length: 1\n");
		printf("Substring: %c\n", s[L-1]);
		return 0;
	}
	while(s[i]==s[i+1]){
		i++;
		if(i==L-1){
			printf("Highest length: %d\n", max);
			printf("Substring: %c\n", s[L-1]);
		return 0;
		}
	}
	for(i=0;i<L; i++){
		while(s[i]==s[i+1]) i++;
		strncat(s1, &s[i], 1);
		for(j=i+1; j<L; j++){
			if(s[j]!=s[i]){
				ch=s[j];
				if(findDuplicateCharInStr(ch, s1)==-1){
					strncat(s1, &s[j], 1);
					if(strlen(s1)>max){
						max=strlen(s1);
						strcpy(s2, s1);
					}
				}
				else{
					max1=j-i;
					if(max<max1){
						for(k=i; k<j; k++)
							strncat(s2, &s[k], 1);
						max=max1;
					}
					s1[0]='\0';
					j=L;
				}
			}	
			else{ //(s[j] == s[i])
				max1=j-i;
				if(max<max1){
					for(k=i; k<j; k++){
						if(findDuplicateCharInStr(s[k], s2)==-1)
							strncat(s2, &s[k], 1);
					}
					max=max1;
				}
				j=L;
				s1[0]='\0';
			}	
		}	
	}
	printf("Highest length: %d\n", strlen(s2));
	printf("Substring: %s\n", s2);	
return 0;
}
