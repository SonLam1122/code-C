#include <stdio.h>
#include <stdlib.h>

void input(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
}

void output(int *ar, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", ar[i]);
	}
}

void findTheFirstPair(int *a, int n, int sum){
	int i, j, keepReading=1;
		for(i=0; i<n-1 && keepReading; i++){
			for(j=i+1; j<n && keepReading; j++)
				if(a[i]+a[j]==sum){
					printf("%d\n%d", i, j);
					keepReading=0;
				}
		}
}
	
int main(){
	int *a, n, sum;
	printf("n= ");
	scanf("%d", &n);
	a=(int *)calloc(n, sizeof(int));
	input(a, n);
	printf("sum= ");
	scanf("%d", &sum);
	printf("\nOUTPUT:\n");
	findTheFirstPair(a, n, sum);
	free(a);
	getchar();
	return 0;
}

