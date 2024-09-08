#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define longMaxLength 10
#define maxLongInt 2147483647
#define maxUnsignedLong 4294967294

int LenNumCnt(long x){
	int cnt=0;
	while(x!=0.0){
		x=x/10;
		cnt++;
	}
	return cnt;
}

int main(){
	// unsigned long max, min, i=0, j=0, k, val;
	unsigned long k, val, max, min;
	int i=0, j=0;
	double valf;
	char strVal[255], str[255];
	printf("\nNhap chuoi so: ");
	fflush(stdin);
	scanf("%s", &strVal);
	for(i=0; i<strlen(strVal); i++) {
		if(isdigit(strVal[i])){
			str[j]=strVal[i];
			j++;
		}
	}
	str[j]='\0';
	val=atol(str);
	valf=atof(str);
	printf("\nChuoi so dai: %d", strlen(str));
	if(strlen(str)>longMaxLength){
		printf("\nVuot khoang so unsigned long!");
	}
	else if(valf>maxUnsignedLong){
		printf("\nVuot khoang so unsigned long!");
	}
	if(val<0) val=labs(val);
	
	// Ver 1
	unsigned long n=val;
	k=n%10;
	max=k;
	min=k;
	n/=10;
	while(n>0){
		k=n%10;
		if(min>k) min=k;
		if(max<k) max=k;
		n/=10;
	}
	printf("\nMax: %ld; Min=%ld;", max, min);
	
	// Ver 2: better
	j=LenNumCnt(val);
	k=val%10;
	max=k;
	min=k;
	for(i=0; i<j; i++){
		k=val%10;
		if(max<=k) max=k;
		if(min>=k) min=k;
		val/=10;
	}
	printf("\nMax: %ld; Min=%ld;", max, min);
	
	// Ver 3: the best
	printf("\n");
	char c=str[0];
	if(c>='0' && c<='9'){
		max=c-'0';
		min=c-'0';
	}
	for(i=0; i<strlen(str); i++){
		c=str[i];
		if(c>='0' && c<='9'){
			k=c-'0';
			if(max<=k) max=k;
			if(min>=k) min=k;
		}
		else printf("Invalid number!");
	}
	printf("\nMax: %ld; Min=%ld;", max, min);
	return 0;
}
