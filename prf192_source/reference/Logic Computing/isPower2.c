#include <stdio.h>

int isPower2(long n){
	int base2=2, exp=1;
	while(base2<n) {
		base2*=2;
		exp++;
	}	
	if(base2!=n) return 0;
	return exp;
}

int isPower2_v2(long n){
	return ((n & (n-1)) == 0);
}

int main(){
	int x=1, y=1;
	long n;
	printf("Input n= "); 
	scanf("%ld", &n);
	if(isPower2(n))
		printf("%ld is power 2, exp:%d.\n", n, isPower2(n));
	else
		printf("%ld is not power 2.\n", n);
	if(isPower2_v2(n))
		printf("%ld is power 2.\n", n);
	else
		printf("%ld is not power 2.\n", n);
	return 0;
}
