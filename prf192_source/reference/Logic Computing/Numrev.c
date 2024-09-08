#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>

int main(){
	int n, len;
	printf("\nInput an integer: ");
	scanf("%d", &n);
	/*if(scanf("%d", &n)==1)
		printf("is an number");
	else
		printf("not a integer");*/
	double j;
	len=(n==0)?1:log10(n)+1;
	printf("log10(%d)=%.2lf; len=%d;", n, log10(n), len);
	
	if(len==1)
		printf("\nReverse number: %d", n);
	else{
		printf("\nReverse number: ");
		while(n/10!=0){
			printf("%d", n%10);
			n/=10;
		}
		printf("%d", n);
	}
	return 0;
}
