#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main(){	
	long integral;
	double fraction;
	int i, j=0;
	char s_integral[255], s_fraction[255], str[255];
	printf("\nEnter integral: ");
	scanf("%s", &s_integral);
	printf("\nEnter fraction: ");
	fflush(stdin);
	scanf("%s", &s_fraction);
	
	for(i=0; i<strlen(s_integral); i++) {
		if(isdigit(s_integral[i])){
			str[j]=s_integral[i];
			j++;
		}
	}
	str[j]='\0';
	integral=atol(str);
	
	j=0;
	for(i=0; i<strlen(s_fraction); i++) {
		if(isdigit(s_fraction[i])){
			str[j]=s_fraction[i];
			j++;
		}
	}
	str[j]='\0';
	j=strlen(str);
	fraction=atof(str);
	assert(fraction>=0.0);
	for(i=0; i<j; i++) 
		fraction/=10.0;
	double result;
	if(integral<0) 
		result=integral-fraction;
	else 
		result=integral+fraction;
	printf("\nResult: %.2lf", result);
	return 0;
}
