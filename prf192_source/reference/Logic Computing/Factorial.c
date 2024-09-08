#include <math.h>
#include <stdio.h>

int Factorial(int n){
	if(n==0) return 1;
	return n*Factorial(n-1);
}

int main(){
	int i, N;
	long S=0;
	printf("\nInput N: ");
	scanf("%d", &N);
	printf("\nFactorial(%d!) = %d", N, Factorial(N));
	for(i=0; i<=N; i++)
		S+=Factorial(i);
	printf("\nSum of factorials (1-%d)! = %ld", N, S);
	return 0;
}
