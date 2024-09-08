#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define longMaxLength 10
#define maxLongInt 2147483647
#define maxUnsignedLong 4294967295

int main(){
	char numStr[255], str[255];
	printf("\nNhap chuoi so: ");
	fflush(stdin);
	//gets(numStr);
	scanf("%s", numStr);
	int i, j=0;
	for(i=0; i<strlen(numStr); i++) {
		printf("\n%c", numStr[i]);
		if(isdigit(numStr[i])){
			printf(" la chu so");
			str[j]=numStr[i];
			j++;
		}
		else
			printf(" ko la chu so;");
	}
	str[j]='\0';
	printf("\nChuoi so str: %s", str);
	int x_atoi;
	double x_atof;
	long x_atol;
	x_atoi=atoi(str);
	x_atof=atof(str);
	x_atol=atol(str);
	printf("\nx_atoi(str)= %d", x_atoi);
	printf("\nx_atof(str)= %.2lf", x_atof);
	printf("\nx_atol(str)= %ld", x_atol);
	if((strlen(str)>longMaxLength) || (x_atof>maxUnsignedLong))
		printf("\nVuot khoang so long (2147483647), so unsigned long 4294967295!");	
	return 0;
}

