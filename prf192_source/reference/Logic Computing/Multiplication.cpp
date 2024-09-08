#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void input(int *a, int n, int lb, int ub){
	int i;
	for(i=0; i<n; i++){
		a[i]=lb;
		lb++;
	}
}

int main(){
	int i, j, lb, ub;
	int *a, n;
	printf("Enter lower-bound, upper-bound: ");
	scanf("%d %d", &lb, &ub);
	n=ub-lb+1;
	if(n>1){
		a=(int *)calloc(n, sizeof(int));
		input(a, n, lb, ub);
		printf("\n\t");
		for(i=0; i<n; i++)
			printf("%d\t", a[i]);
		j=0;
		while(j<=n-1){
			printf("\n%d\t", a[j]);	
			for(i=0; i<n; i++)
				printf("%d\t", a[i]*a[j]);
			j++;
		}
		free(a);
	}
}
