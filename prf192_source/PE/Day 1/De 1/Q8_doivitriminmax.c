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

void swapMaxMinIndex(int *a, int n){
	int i, t, indexMax, indexMin, Max=a[0], Min=a[0];
	for(i=0; i<n; i++){
		if(a[i]>Max){
			Max=a[i];
			indexMax=i;
		}
		if(a[i]<Min){
			Min=a[i];
			indexMin=i;
		}
	}
	if(indexMax>=0 && indexMin>=0){
		t=a[indexMax];
		a[indexMax]=a[indexMin];
		a[indexMin]=t;
	}
}
	
int main(){
	int *a, n;
	scanf("%d", &n);
	a=(int *)calloc(n, sizeof(int));
	input(a, n);
	printf("\nOUTPUT:\n");
	swapMaxMinIndex(a, n);
	output(a, n);
	free(a);
	getchar();
	return 0;
}

