#include <math.h>
#include <stdio.h>

int IsPrime(int n){
	int i;
	for(i=2; i*i<=n;i++)
		if(n%i==0) return 0;
	return 1;
}

int main(){
	int i, n, Sum=0;
	printf("n= ");
	scanf("%d", &n);
	printf("Prime numbers <=%d: ", n);
	for(i=2; i<=n; i++){
		if(IsPrime(i)){
			printf("%5d", i);
			Sum+=i;
		}
	}
	printf("\nTong cac so nguyen to <=%d: %d.", n, Sum);
	if(IsPrime(n)) 
		printf("\n%d is prime.", n);
	else
		printf("\n%d is not prime.", n);
	return 0;
}
